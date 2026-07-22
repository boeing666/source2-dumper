#pragma once

class C_EconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0x1180*/  // sizeof 0x16F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    float32 m_flFlexDelayTime; // offset 0x1190, size 0x4, align 4
    char _pad_1194[0x4]; // offset 0x1194
    float32* m_flFlexDelayedWeight; // offset 0x1198, size 0x8, align 8
    bool m_bAttributesInitialized; // offset 0x11A0, size 0x1, align 1
    char _pad_11A1[0x7]; // offset 0x11A1
    C_AttributeContainer m_AttributeManager; // offset 0x11A8, size 0x4D0, align 255
    uint32 m_OriginalOwnerXuidLow; // offset 0x1678, size 0x4, align 4
    uint32 m_OriginalOwnerXuidHigh; // offset 0x167C, size 0x4, align 4
    int32 m_nFallbackPaintKit; // offset 0x1680, size 0x4, align 4
    int32 m_nFallbackSeed; // offset 0x1684, size 0x4, align 4
    float32 m_flFallbackWear; // offset 0x1688, size 0x4, align 4
    int32 m_nFallbackStatTrak; // offset 0x168C, size 0x4, align 4
    bool m_bClientside; // offset 0x1690, size 0x1, align 1
    bool m_bParticleSystemsCreated; // offset 0x1691, size 0x1, align 1
    char _pad_1692[0x6]; // offset 0x1692
    CUtlVector< int32 > m_vecAttachedParticles; // offset 0x1698, size 0x18, align 8
    CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // offset 0x16B0, size 0x4, align 4
    int32 m_iOldTeam; // offset 0x16B4, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0x16B8, size 0x1, align 1
    char _pad_16B9[0x3]; // offset 0x16B9
    int32 m_nUnloadedModelIndex; // offset 0x16BC, size 0x4, align 4
    int32 m_iNumOwnerValidationRetries; // offset 0x16C0, size 0x4, align 4
    char _pad_16C4[0xC]; // offset 0x16C4
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0x16D0, size 0x4, align 4
    char _pad_16D4[0x4]; // offset 0x16D4
    CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // offset 0x16D8, size 0x18, align 8
};
