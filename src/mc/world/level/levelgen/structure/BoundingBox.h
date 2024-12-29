#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on


class AABB;

class BoundingBox : public ll::math::CommutativeGroup<BoundingBox, BlockPos, BlockPos> {
public:
    union {
        BlockPos min, x, r, s;
    };
    union {
        BlockPos max, y, g, t, z, b, p;
    };

    [[nodiscard]] constexpr BoundingBox() noexcept : min(0), max(0) {};
    [[nodiscard]] constexpr BoundingBox(class BoundingBox const& k) noexcept = default;
    constexpr BoundingBox& operator=(class BoundingBox const& k) noexcept    = default;
    [[nodiscard]] constexpr BoundingBox(BlockPos const& min, BlockPos const& max) noexcept : min(min), max(max) {};

    template <class F>
    constexpr bool forEachPos(F&& todo) const {
        for (int dy = min.y; dy <= max.y; ++dy)
            for (int dx = min.x; dx <= max.x; ++dx)
                for (int dz = min.z; dz <= max.z; ++dz) {
                    if (!std::invoke(std::forward<F>(todo), BlockPos{dx, dy, dz})) {
                        return false;
                    }
                }
        return true;
    }

    constexpr BoundingBox& merge(BoundingBox const& a) noexcept {
        *this = BoundingBox{ll::math::min(a.min, min), ll::math::max(a.max, max)};
        return *this;
    }

    constexpr BoundingBox& merge(BlockPos const& a) noexcept {
        *this = BoundingBox{ll::math::min(a, min), ll::math::max(a, max)};
        return *this;
    }

    template <typename T>
    [[nodiscard]] constexpr T& get(size_t index) noexcept {
        if (index == 1) {
            return (T&)z;
        }
        return (T&)x;
    }

    template <typename T>
    [[nodiscard]] constexpr T const& get(size_t index) const noexcept {
        if (index == 1) {
            return (T const&)z;
        }
        return (T const&)x;
    }

    [[nodiscard]] bool contains(BlockPos const& a) const noexcept { return a.ge(min).all() && a.le(max).all(); }

    [[nodiscard]] bool contains(BoundingBox const& a) const noexcept {
        return a.min.ge(min).all() && a.max.le(max).all();
    }

    [[nodiscard]] BlockPos getSideLength() const noexcept { return max - min + 1; }

    LLNDAPI operator class AABB() const;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BoundingBox(::BlockPos const& min, ::BlockPos const& size, ::Rotation rotation);

    MCAPI void applyTransformation(::BlockPos const& pivot, ::Rotation rotationXZ, bool mirrorX, bool mirrorZ);

    MCAPI bool isValid() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::BoundingBox> intersect(::BoundingBox const& lhs, ::BoundingBox const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockPos const& min, ::BlockPos const& size, ::Rotation rotation);
    // NOLINTEND
};
