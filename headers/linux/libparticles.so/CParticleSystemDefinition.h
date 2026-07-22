#pragma once

class CParticleSystemDefinition : public IParticleSystemDefinition /*0x0*/  // sizeof 0x450, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nBehaviorVersion; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressField
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators; // offset 0x10, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CParticleFunctionEmitter* > m_Emitters; // offset 0x28, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CParticleFunctionInitializer* > m_Initializers; // offset 0x40, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CParticleFunctionOperator* > m_Operators; // offset 0x58, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CParticleFunctionForce* > m_ForceGenerators; // offset 0x70, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CParticleFunctionConstraint* > m_Constraints; // offset 0x88, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< CParticleFunctionRenderer* > m_Renderers; // offset 0xA0, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< ParticleChildrenInfo_t > m_Children; // offset 0xB8, size 0x18, align 8 | MPropertySuppressField
    char _pad_00D0[0xA8]; // offset 0xD0
    int32 m_nFirstMultipleOverride_BackwardCompat; // offset 0x178, size 0x4, align 4 | MPropertySuppressField
    char _pad_017C[0xDC]; // offset 0x17C
    int32 m_nInitialParticles; // offset 0x258, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nMaxParticles; // offset 0x25C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nGroupID; // offset 0x260, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_BoundingBoxMin; // offset 0x264, size 0xC, align 4 | MPropertyStartGroup MPropertyFriendlyName MVectorIsCoordinate
    Vector m_BoundingBoxMax; // offset 0x270, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flDepthSortBias; // offset 0x27C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSortOverridePositionCP; // offset 0x280, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bInfiniteBounds; // offset 0x284, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEnableNamedValues; // offset 0x285, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_0286[0x2]; // offset 0x286
    CUtlString m_NamedValueDomain; // offset 0x288, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAutoRebuildOnChange MPropertySuppressExpr
    CUtlVector< ParticleNamedValueSource_t* > m_NamedValueLocals; // offset 0x290, size 0x18, align 8 | MPropertySuppressField
    Color m_ConstantColor; // offset 0x2A8, size 0x4, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertyColorPlusAlpha
    Vector m_ConstantNormal; // offset 0x2AC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flConstantRadius; // offset 0x2B8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flConstantRotation; // offset 0x2BC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flConstantRotationSpeed; // offset 0x2C0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flConstantLifespan; // offset 0x2C4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nConstantSequenceNumber; // offset 0x2C8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeEditor
    int32 m_nConstantSequenceNumber1; // offset 0x2CC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeEditor
    int32 m_nSnapshotControlPoint; // offset 0x2D0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_02D4[0x4]; // offset 0x2D4
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // offset 0x2D8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // offset 0x2E0, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flCullRadius; // offset 0x2E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCullFillCost; // offset 0x2EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCullControlPoint; // offset 0x2F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_02F4[0x4]; // offset 0x2F4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // offset 0x2F8, size 0x8, align 8 | MPropertyFriendlyName
    int32 m_nFallbackMaxCount; // offset 0x300, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0304[0x4]; // offset 0x304
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // offset 0x308, size 0x8, align 8 | MPropertyFriendlyName
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // offset 0x310, size 0x8, align 8 | MPropertyFriendlyName
    float32 m_flPreSimulationTime; // offset 0x318, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flStopSimulationAfterTime; // offset 0x31C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaximumTimeStep; // offset 0x320, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaximumSimTime; // offset 0x324, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMinimumSimTime; // offset 0x328, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMinimumTimeStep; // offset 0x32C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMinimumFrames; // offset 0x330, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bIsGPUParticleSystem; // offset 0x334, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr MPropertyAutoRebuildOnChange
    char _pad_0335[0x3]; // offset 0x335
    int32 m_nMinCPULevel; // offset 0x338, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nMinGPULevel; // offset 0x33C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flNoDrawTimeToGoToSleep; // offset 0x340, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxDrawDistance; // offset 0x344, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartFadeDistance; // offset 0x348, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxCreationDistance; // offset 0x34C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nAggregationMinAvailableParticles; // offset 0x350, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAggregateRadius; // offset 0x354, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bShouldBatch; // offset 0x358, size 0x1, align 1 | MPropertyFriendlyName MParticleAdvancedField
    bool m_bShouldHitboxesFallbackToRenderBounds; // offset 0x359, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bShouldHitboxesFallbackToSnapshot; // offset 0x35A, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bShouldHitboxesFallbackToCollisionHulls; // offset 0x35B, size 0x1, align 1 | MPropertyFriendlyName
    InheritableBoolType_t m_nViewModelEffect; // offset 0x35C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySuppressExpr
    bool m_bScreenSpaceEffect; // offset 0x360, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0361[0x7]; // offset 0x361
    CUtlSymbolLarge m_pszTargetLayerID; // offset 0x368, size 0x8, align 8 | MPropertyFriendlyName
    int32 m_nSkipRenderControlPoint; // offset 0x370, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nAllowRenderControlPoint; // offset 0x374, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bShouldSort; // offset 0x378, size 0x1, align 1 | MPropertyFriendlyName MParticleAdvancedField
    char _pad_0379[0x47]; // offset 0x379
    CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // offset 0x3C0, size 0x18, align 8 | MPropertySuppressField
    char _pad_03D8[0x78]; // offset 0x3D8
};
