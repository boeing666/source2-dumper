#pragma once

class CBaseAnimGraphController : public CSkeletonAnimationController /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    AnimationAlgorithm_t m_nAnimationAlgorithm; // offset 0x18, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0019[0x7]; // offset 0x19
    CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // offset 0x20, size 0x1490, align 255 | MNetworkEnable
    CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance; // offset 0x14B0, size 0x8, align 8 | MSaveOpsForField
    char _pad_14B8[0x58]; // offset 0x14B8
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // offset 0x1510, size 0x4, align 255
    char _pad_1514[0x4]; // offset 0x1514
    CUtlVector< CGlobalSymbol > m_vecSecondarySkeletonNames; // offset 0x1518, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< CBaseAnimGraph > > m_vecSecondarySkeletons; // offset 0x1530, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    int32 m_nSecondarySkeletonMasterCount; // offset 0x1548, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_154C[0x4]; // offset 0x154C
    float32 m_flSoundSyncTime; // offset 0x1550, size 0x4, align 4
    uint32 m_nActiveIKChainMask; // offset 0x1554, size 0x4, align 4
    char _pad_1558[0x50]; // offset 0x1558
    HSequence m_hSequence; // offset 0x15A8, size 0x4, align 255 | MNetworkEnable MNetworkSerializer MNetworkChangeCallback MNetworkPriority
    GameTime_t m_flSeqStartTime; // offset 0x15AC, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback MNetworkPriority
    float32 m_flSeqFixedCycle; // offset 0x15B0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkPriority
    AnimLoopMode_t m_nAnimLoopMode; // offset 0x15B4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkPriority
    CNetworkedQuantizedFloat m_flPlaybackRate; // offset 0x15B8, size 0x8, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkChangeCallback MNetworkPriority
    char _pad_15C0[0x4]; // offset 0x15C0
    SequenceFinishNotifyState_t m_nNotifyState; // offset 0x15C4, size 0x1, align 1
    bool m_bNetworkedAnimationInputsChanged; // offset 0x15C5, size 0x1, align 1
    bool m_bNetworkedSequenceChanged; // offset 0x15C6, size 0x1, align 1
    bool m_bLastUpdateSkipped; // offset 0x15C7, size 0x1, align 1
    bool m_bSequenceFinished; // offset 0x15C8, size 0x1, align 1
    char _pad_15C9[0x3]; // offset 0x15C9
    GameTick_t m_nPrevAnimUpdateTick; // offset 0x15CC, size 0x4, align 255
    char _pad_15D0[0x298]; // offset 0x15D0
    CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2; // offset 0x1868, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    C_NetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2; // offset 0x1870, size 0x18, align 8 | MNetworkEnable MNotSaved
    int32 m_nSerializePoseRecipeSizeAG2; // offset 0x1888, size 0x4, align 4 | MNetworkEnable MNotSaved
    int32 m_nSerializePoseRecipeVersionAG2; // offset 0x188C, size 0x4, align 4 | MNetworkEnable MNotSaved
    int32 m_nServerGraphInstanceIteration; // offset 0x1890, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nServerSerializationContextIteration; // offset 0x1894, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    ResourceId_t m_primaryGraphId; // offset 0x1898, size 0x8, align 255 | MNetworkEnable MNetworkChangeCallback
    C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds; // offset 0x18A0, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds; // offset 0x18B8, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    CGlobalSymbol m_sAnimGraph2Identifier; // offset 0x18D0, size 0x8, align 8
    char _pad_18D8[0x220]; // offset 0x18D8
    CUtlVector< ExternalAnimGraph_t > m_vecExternalGraphs; // offset 0x1AF8, size 0x18, align 8 | MSaveOpsForField
    char _pad_1B10[0x21]; // offset 0x1B10
    AnimationAlgorithm_t m_nPrevAnimationAlgorithm; // offset 0x1B31, size 0x1, align 1
    char _pad_1B32[0x6]; // offset 0x1B32
};
