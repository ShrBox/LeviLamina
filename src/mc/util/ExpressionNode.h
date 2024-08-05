#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/MolangCompileResult.h"
#include "mc/enums/ExpressionOp.h"
#include "mc/util/molang/MolangQueryFunctionReturnType.h"
#include "mc/util/molang/MolangVariableIndex.h"
#include "mc/util/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ExpressionNode {
public:
    // NOLINTBEGIN
    MCAPI ExpressionNode();

    MCAPI ExpressionNode(class ExpressionNode&& rhs);

    MCAPI ExpressionNode(class ExpressionNode const& rhs);

    MCAPI explicit ExpressionNode(float value);

    MCAPI ExpressionNode(struct MolangScriptArg& value, ::ExpressionOp op);

    MCAPI ExpressionNode(
        class Json::Value const&            value,
        class SemVersion const&             molangVersion,
        gsl::span<class HashedString const> querySetID
    );

    MCAPI ExpressionNode(
        class Json::Value const&            value,
        ::MolangVersion                     molangVersion,
        gsl::span<class HashedString const> querySetID
    );

    MCAPI ExpressionNode(
        std::string const&                  expression,
        class SemVersion const&             molangVersion,
        gsl::span<class HashedString const> querySetID
    );

    MCAPI ExpressionNode(
        std::string const&                  expression,
        ::MolangVersion                     molangVersion,
        gsl::span<class HashedString const> querySetID
    );

    MCAPI void clear();

    MCAPI float evalAsFloat(class RenderParams& renderParams) const;

    MCAPI struct MolangScriptArg const& evalGeneric(class RenderParams& renderParams) const;

    MCAPI std::string const getExpressionString() const;

    MCAPI std::string const& getExpressionString();

    MCAPI ::MolangVersion const getMolangVersion() const;

    MCAPI uint64 getTreeHash(bool sideEffectsReturnZero) const;

    MCAPI bool getTreeString(std::string& dest, bool sideEffectsReturnZero) const;

    MCAPI bool hasDisallowedQueries(std::vector<std::string> const& allowedQueries) const;

    MCAPI bool hasMadd() const;

    MCAPI bool hasSideEffects(bool) const;

    MCAPI bool isInitialized() const;

    MCAPI bool isValid() const;

    MCAPI ::MolangCompileResult link() const;

    MCAPI ::MolangCompileResult link(::MolangVersion molangVersion) const;

    MCAPI void moveConstantChildToValueIfFloatOrHashType(int firstConstChildIndex);

    MCAPI class ExpressionNode& operator=(class ExpressionNode&&);

    MCAPI class ExpressionNode& operator=(class ExpressionNode const& rhs);

    MCAPI class ExpressionNode& operator=(float value);

    MCAPI bool operator==(class ExpressionNode const& rhs) const;

    MCAPI bool
    parse(std::string const& inputExpression, ::MolangVersion molangVersion, gsl::span<class HashedString const> idSet);

    MCAPI ~ExpressionNode();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static void buildExpressionOpTable();

    MCAPI static float fast_atof_positiveOnly(char const*& ptr);

    MCAPI static class Experiments& getExperiments();

    MCAPI static char const* getOpFriendlyName(::ExpressionOp op);

    MCAPI static std::recursive_mutex& getQueryFunctionMutex();

    MCAPI static std::function<
        struct MolangScriptArg const&(class RenderParams&, std::vector<class ExpressionNode> const&)> const*
    queryFunctionAccessorFromString(
        std::string const&               functionName,
        ::MolangVersion                  molangVersion,
        ::MolangQueryFunctionReturnType& functionReturnType,
        bool                             missingIsOkay_returnNullIfSo
    );

    MCAPI static struct MolangQueryFunction& registerQueryFunction(
        std::string const& queryFunctionName,
        std::function<struct MolangScriptArg const&(class RenderParams&, std::vector<class ExpressionNode> const&)>
                                          accessor,
        std::string const&                documentation,
        ::MolangQueryFunctionReturnType   returnType,
        class HashedString                querySetIdentifier,
        uint64                            minArgumentCount,
        uint64                            maxArgumentCount,
        std::initializer_list<int> const& experiments
    );

    MCAPI static void setExperiments(class Experiments const& experiments);

    MCAPI static void
    unregisterQueryFunction(std::string const& queryFunctionName, class HashedString querySetIdentifier);

    MCAPI static std::vector<std::pair<std::string, ::ExpressionOp>> mAliasOpTokens;

    MCAPI static std::vector<std::string> mExpressionOpTokens;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _buildTree(struct ExpressionOpBitField const& usedTokenFlags, ::MolangVersion molangVersion);

    MCAPI bool _checkAllOperationsAreValid() const;

    MCAPI bool
    _hasDisallowedQueryPtrs(std::vector<std::function<
                                struct
                                MolangScriptArg const&(class RenderParams&, std::vector<class ExpressionNode> const&)> const*> const&)
        const;

    MCAPI void _logEvaluatedToNan() const;

    MCAPI bool _optimize(::MolangVersion version, class RenderParams& outRenderParams, int);

    MCAPI bool _processBinaryExpressions(std::function<bool(::ExpressionOp)> predicate);

    MCAPI bool _processTernaryAndConditionalExpressions();

    MCAPI bool _readNextToken(
        char const*&                               expression,
        gsl::span<class HashedString const> const& idSet,
        ::MolangVersion                            molangVersion
    );

    MCAPI void _setExpressionStringWithoutRelink(std::string const& expressionString);

    MCAPI bool _tokenize(
        char const*                                expression,
        struct ExpressionOpBitField&               usedTokenFlags,
        gsl::span<class HashedString const> const& idSet,
        ::MolangVersion                            molangVersion
    );

    MCAPI bool _validate(::MolangVersion version, bool inLoop, int inAssignmentLHSDepth) const;

    MCAPI bool _validateChildrenAreNumerical(::MolangVersion version) const;

    MCAPI bool findClosingOp(uint64& i, ::ExpressionOp endOp) const;

    MCAPI bool optimizeFunctionCallParams();

    MCAPI bool processArrays();

    MCAPI bool processBinaryExpression(::ExpressionOp op);

    MCAPI bool processMathFuncs();

    MCAPI bool processMemberAccessors();

    MCAPI bool processNegativesAndLogicalNots();

    MCAPI bool processQueriesAndFunctions();

    MCAPI bool processSections();

    MCAPI bool processSemicolons();

    MCAPI bool processUnaryExpression(::ExpressionOp op);

    MCAPI static ::MolangCompileResult _buildProgram(
        struct MolangProgramBuildState& buildState,
        class ExpressionNode const*     node,
        ::MolangVersion                 molangVersion
    );

    MCAPI static struct MolangScriptArg* _getOrCreateReferencedMemberVariableScriptArg(
        struct MolangEvalParams&    state,
        class ExpressionNode const& memberAccessorNode
    );

    MCAPI static bool _getQueryFunctionAccessor(
        struct MolangScriptArg&         arg,
        std::string const&              functionName,
        ::MolangVersion                 molangVersion,
        ::MolangQueryFunctionReturnType functionReturnType,
        class HashedString const&       querySetId
    );

    MCAPI static struct MolangScriptArg const* _getScriptArgFromMemberAccessedVariable(
        struct MolangEvalParams&    state,
        class ExpressionNode const& memberAccessorNode
    );

    MCAPI static bool _initializeMolangQueries();

    MCAPI static void _writeScriptArgToMemberAccessedVariable(
        struct MolangEvalParams&      state,
        class ExpressionNode const&   memberAccessorNode,
        struct MolangScriptArg const& value
    );

    MCAPI static void _writeScriptArgToMolangVariable(
        class MolangVariableMap&      destMap,
        ::MolangVariableIndex         variableIndex,
        struct MolangScriptArg const& value
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::function<
        struct MolangScriptArg const&(class RenderParams&, std::vector<class ExpressionNode> const&)>
        _defaultUnknownQueryFunction;

    MCAPI static class ExperimentStorage mExperiments;

    MCAPI static bool mMolangInitialized;

    MCAPI static std::unordered_multimap<class HashedString, struct MolangQueryFunction> mQueryFunctionAccessors;

    MCAPI static std::unordered_map<class HashedString, std::unordered_set<class HashedString>> mQuerySets;

    // NOLINTEND
};
