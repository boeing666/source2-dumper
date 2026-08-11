#pragma once

class CBaseAnimGraphController : public CSkeletonAnimationController /*0x0*/  // sizeof 0x858, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    AnimationAlgorithm_t m_nAnimationAlgorithm; // offset 0x18, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0019[0x7]; // offset 0x19
    CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // offset 0x20, size 0x208, align 255 | MNetworkEnable
    CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance; // offset 0x228, size 0x8, align 8 | MSaveOpsForField
    char _pad_0230[0x58]; // offset 0x230
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // offset 0x288, size 0x4, align 255
    char _pad_028C[0x4]; // offset 0x28C
    CUtlVector< CGlobalSymbol > m_vecSecondarySkeletonNames; // offset 0x290, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBaseAnimGraph > > m_vecSecondarySkeletons; // offset 0x2A8, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    int32 m_nSecondarySkeletonMasterCount; // offset 0x2C0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_02C4[0x4]; // offset 0x2C4
    float32 m_flSoundSyncTime; // offset 0x2C8, size 0x4, align 4
    uint32 m_nActiveIKChainMask; // offset 0x2CC, size 0x4, align 4
    HSequence m_hSequence; // offset 0x2D0, size 0x4, align 255 | MNetworkEnable MNetworkSerializer MNetworkChangeCallback MNetworkPriority
    GameTime_t m_flSeqStartTime; // offset 0x2D4, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback MNetworkPriority
    float32 m_flSeqFixedCycle; // offset 0x2D8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkPriority
    AnimLoopMode_t m_nAnimLoopMode; // offset 0x2DC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkPriority
    CNetworkedQuantizedFloat m_flPlaybackRate; // offset 0x2E0, size 0x8, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkChangeCallback MNetworkPriority
    char _pad_02E8[0x4]; // offset 0x2E8
    SequenceFinishNotifyState_t m_nNotifyState; // offset 0x2EC, size 0x1, align 1
    bool m_bNetworkedAnimationInputsChanged; // offset 0x2ED, size 0x1, align 1
    bool m_bNetworkedSequenceChanged; // offset 0x2EE, size 0x1, align 1
    bool m_bLastUpdateSkipped; // offset 0x2EF, size 0x1, align 1
    bool m_bSequenceFinished; // offset 0x2F0, size 0x1, align 1
    char _pad_02F1[0x3]; // offset 0x2F1
    GameTick_t m_nPrevAnimUpdateTick; // offset 0x2F4, size 0x4, align 255
    char _pad_02F8[0x298]; // offset 0x2F8
    CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2; // offset 0x590, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    CNetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2; // offset 0x598, size 0x18, align 8 | MNetworkEnable MNotSaved
    int32 m_nSerializePoseRecipeSizeAG2; // offset 0x5B0, size 0x4, align 4 | MNetworkEnable MNotSaved
    int32 m_nSerializePoseRecipeVersionAG2; // offset 0x5B4, size 0x4, align 4 | MNetworkEnable MNotSaved
    int32 m_nServerGraphInstanceIteration; // offset 0x5B8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nServerSerializationContextIteration; // offset 0x5BC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    ResourceId_t m_primaryGraphId; // offset 0x5C0, size 0x8, align 255 | MNetworkEnable MNetworkChangeCallback
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds; // offset 0x5C8, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds; // offset 0x5E0, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    CGlobalSymbol m_sAnimGraph2Identifier; // offset 0x5F8, size 0x8, align 8
    char _pad_0600[0x220]; // offset 0x600
    CUtlVector< ExternalAnimGraph_t > m_vecExternalGraphs; // offset 0x820, size 0x18, align 8 | MSaveOpsForField
    char _pad_0838[0x20]; // offset 0x838
};
