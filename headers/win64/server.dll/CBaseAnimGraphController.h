#pragma once

class CBaseAnimGraphController : public CSkeletonAnimationController /*0x0*/  // sizeof 0x650, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    AnimationAlgorithm_t m_nAnimationAlgorithm; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x3]; // offset 0x19
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // offset 0x1C, size 0x4, align 255
    CNetworkUtlVectorBase< CGlobalSymbol > m_vecSecondarySkeletonSlotIDs; // offset 0x20, size 0x18, align 8
    CNetworkUtlVectorBase< CHandle< CBaseAnimGraph > > m_vecSecondarySkeletons; // offset 0x38, size 0x18, align 8
    int32 m_nSecondarySkeletonMasterCount; // offset 0x50, size 0x4, align 4
    float32 m_flSoundSyncTime; // offset 0x54, size 0x4, align 4
    uint32 m_nActiveIKChainMask; // offset 0x58, size 0x4, align 4
    HSequence m_hSequence; // offset 0x5C, size 0x4, align 255
    GameTime_t m_flSeqStartTime; // offset 0x60, size 0x4, align 255
    float32 m_flSeqFixedCycle; // offset 0x64, size 0x4, align 4
    AnimLoopMode_t m_nAnimLoopMode; // offset 0x68, size 0x4, align 4
    CNetworkedQuantizedFloat m_flPlaybackRate; // offset 0x6C, size 0x8, align 4
    char _pad_0074[0x4]; // offset 0x74
    SequenceFinishNotifyState_t m_nNotifyState; // offset 0x78, size 0x1, align 1
    bool m_bNetworkedAnimationInputsChanged; // offset 0x79, size 0x1, align 1
    bool m_bNetworkedSequenceChanged; // offset 0x7A, size 0x1, align 1
    bool m_bLastUpdateSkipped; // offset 0x7B, size 0x1, align 1
    bool m_bSequenceFinished; // offset 0x7C, size 0x1, align 1
    char _pad_007D[0x3]; // offset 0x7D
    GameTick_t m_nPrevAnimUpdateTick; // offset 0x80, size 0x4, align 255
    char _pad_0084[0x29C]; // offset 0x84
    CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2; // offset 0x320, size 0x8, align 8
    CUtlVectorEmbeddedNetworkVar< AnimGraph2SerializedPoseRecipeSlot_t > m_SerializePoseRecipeAG2Slots; // offset 0x328, size 0x68, align 8 | MNotSaved
    CNetworkUtlVectorBase< uint8 > m_SerializePoseRecipeAG2Dynamic; // offset 0x390, size 0x18, align 8 | MNotSaved
    uint32 m_nSerializePoseRecipeAG2ActiveSlot; // offset 0x3A8, size 0x4, align 4 | MNotSaved
    int32 m_nSerializePoseRecipeVersionAG2; // offset 0x3AC, size 0x4, align 4 | MNotSaved
    char _pad_03B0[0x10]; // offset 0x3B0
    int32 m_nServerGraphInstanceIteration; // offset 0x3C0, size 0x4, align 4
    int32 m_nServerSerializationContextIteration; // offset 0x3C4, size 0x4, align 4
    ResourceId_t m_primaryGraphId; // offset 0x3C8, size 0x8, align 255
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds; // offset 0x3D0, size 0x18, align 8
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds; // offset 0x3E8, size 0x18, align 8
    CGlobalSymbol m_sAnimGraph2Identifier; // offset 0x400, size 0x8, align 8
    CAnimGraph2InstancePtr m_pGraphInstanceAG2; // offset 0x408, size 0x10, align 255
    char _pad_0418[0x210]; // offset 0x418
    CExternalAnimGraphList m_vecExternalGraphs; // offset 0x628, size 0x20, align 255
    char _pad_0648[0x8]; // offset 0x648
};
