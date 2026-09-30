#pragma once

class CBaseAnimGraphController : public CSkeletonAnimationController /*0x0*/  // sizeof 0x5D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
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
    char _pad_0084[0x21C]; // offset 0x84
    CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2; // offset 0x2A0, size 0x8, align 8
    CUtlVectorEmbeddedNetworkVar< AnimGraph2SerializedPoseRecipeSlot_t > m_SerializePoseRecipeAG2Slots; // offset 0x2A8, size 0x68, align 8 | MNotSaved
    CNetworkUtlVectorBase< uint8 > m_SerializePoseRecipeAG2Dynamic; // offset 0x310, size 0x18, align 8 | MNotSaved
    uint32 m_nSerializePoseRecipeAG2ActiveSlot; // offset 0x328, size 0x4, align 4 | MNotSaved
    int32 m_nSerializePoseRecipeVersionAG2; // offset 0x32C, size 0x4, align 4 | MNotSaved
    char _pad_0330[0x10]; // offset 0x330
    int32 m_nServerGraphInstanceIteration; // offset 0x340, size 0x4, align 4
    int32 m_nServerSerializationContextIteration; // offset 0x344, size 0x4, align 4
    ResourceId_t m_primaryGraphId; // offset 0x348, size 0x8, align 255
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds; // offset 0x350, size 0x18, align 8
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds; // offset 0x368, size 0x18, align 8
    CGlobalSymbol m_sAnimGraph2Identifier; // offset 0x380, size 0x8, align 8
    CAnimGraph2InstancePtr m_pGraphInstanceAG2; // offset 0x388, size 0x10, align 255
    char _pad_0398[0x210]; // offset 0x398
    CExternalAnimGraphList m_vecExternalGraphs; // offset 0x5A8, size 0x20, align 255
    char _pad_05C8[0x8]; // offset 0x5C8
};
