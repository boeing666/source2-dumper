#pragma once

class CBaseAnimGraphController : public CSkeletonAnimationController /*0x0*/  // sizeof 0x6B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    AnimationAlgorithm_t m_nAnimationAlgorithm; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x3]; // offset 0x19
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // offset 0x1C, size 0x4, align 255
    C_NetworkUtlVectorBase< CGlobalSymbol > m_vecSecondarySkeletonSlotIDs; // offset 0x20, size 0x18, align 8
    C_NetworkUtlVectorBase< CHandle< CBaseAnimGraph > > m_vecSecondarySkeletons; // offset 0x38, size 0x18, align 8
    int32 m_nSecondarySkeletonMasterCount; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
    float32 m_flSoundSyncTime; // offset 0x58, size 0x4, align 4
    uint32 m_nActiveIKChainMask; // offset 0x5C, size 0x4, align 4
    char _pad_0060[0x60]; // offset 0x60
    HSequence m_hSequence; // offset 0xC0, size 0x4, align 255
    GameTime_t m_flSeqStartTime; // offset 0xC4, size 0x4, align 255
    float32 m_flSeqFixedCycle; // offset 0xC8, size 0x4, align 4
    AnimLoopMode_t m_nAnimLoopMode; // offset 0xCC, size 0x4, align 4
    CNetworkedQuantizedFloat m_flPlaybackRate; // offset 0xD0, size 0x8, align 4
    char _pad_00D8[0x4]; // offset 0xD8
    SequenceFinishNotifyState_t m_nNotifyState; // offset 0xDC, size 0x1, align 1
    bool m_bNetworkedAnimationInputsChanged; // offset 0xDD, size 0x1, align 1
    bool m_bNetworkedSequenceChanged; // offset 0xDE, size 0x1, align 1
    bool m_bLastUpdateSkipped; // offset 0xDF, size 0x1, align 1
    bool m_bSequenceFinished; // offset 0xE0, size 0x1, align 1
    char _pad_00E1[0x3]; // offset 0xE1
    GameTick_t m_nPrevAnimUpdateTick; // offset 0xE4, size 0x4, align 255
    char _pad_00E8[0x298]; // offset 0xE8
    CStrongHandle< InfoForResourceTypeCNmGraphDefinition > m_hGraphDefinitionAG2; // offset 0x380, size 0x8, align 8
    C_UtlVectorEmbeddedNetworkVar< AnimGraph2SerializedPoseRecipeSlot_t > m_SerializePoseRecipeAG2Slots; // offset 0x388, size 0x68, align 8 | MNotSaved
    C_NetworkUtlVectorBase< uint8 > m_SerializePoseRecipeAG2Dynamic; // offset 0x3F0, size 0x18, align 8 | MNotSaved
    uint32 m_nSerializePoseRecipeAG2ActiveSlot; // offset 0x408, size 0x4, align 4 | MNotSaved
    int32 m_nSerializePoseRecipeVersionAG2; // offset 0x40C, size 0x4, align 4 | MNotSaved
    int32 m_nServerGraphInstanceIteration; // offset 0x410, size 0x4, align 4
    int32 m_nServerSerializationContextIteration; // offset 0x414, size 0x4, align 4
    ResourceId_t m_primaryGraphId; // offset 0x418, size 0x8, align 255
    C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds; // offset 0x420, size 0x18, align 8
    C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds; // offset 0x438, size 0x18, align 8
    CGlobalSymbol m_sAnimGraph2Identifier; // offset 0x450, size 0x8, align 8
    CAnimGraph2InstancePtr m_pGraphInstanceAG2; // offset 0x458, size 0x10, align 255
    char _pad_0468[0x210]; // offset 0x468
    CExternalAnimGraphList m_vecExternalGraphs; // offset 0x678, size 0x20, align 255
    char _pad_0698[0x11]; // offset 0x698
    AnimationAlgorithm_t m_nPrevAnimationAlgorithm; // offset 0x6A9, size 0x1, align 1
    char _pad_06AA[0x6]; // offset 0x6AA
};
