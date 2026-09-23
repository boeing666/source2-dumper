#pragma once

class C_EconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0x1268*/  // sizeof 0x1918, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1278]; // offset 0x0
    float32 m_flFlexDelayTime; // offset 0x1278, size 0x4, align 4
    char _pad_127C[0x4]; // offset 0x127C
    float32* m_flFlexDelayedWeight; // offset 0x1280, size 0x8, align 8
    bool m_bAttributesInitialized; // offset 0x1288, size 0x1, align 1
    char _pad_1289[0x7]; // offset 0x1289
    C_AttributeContainer m_AttributeManager; // offset 0x1290, size 0x610, align 255
    uint32 m_OriginalOwnerXuidLow; // offset 0x18A0, size 0x4, align 4
    uint32 m_OriginalOwnerXuidHigh; // offset 0x18A4, size 0x4, align 4
    int32 m_nFallbackPaintKit; // offset 0x18A8, size 0x4, align 4
    int32 m_nFallbackSeed; // offset 0x18AC, size 0x4, align 4
    float32 m_flFallbackWear; // offset 0x18B0, size 0x4, align 4
    int32 m_nFallbackStatTrak; // offset 0x18B4, size 0x4, align 4
    bool m_bClientside; // offset 0x18B8, size 0x1, align 1
    bool m_bParticleSystemsCreated; // offset 0x18B9, size 0x1, align 1
    char _pad_18BA[0x6]; // offset 0x18BA
    CUtlVector< int32 > m_vecAttachedParticles; // offset 0x18C0, size 0x18, align 8
    CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // offset 0x18D8, size 0x4, align 4
    int32 m_iOldTeam; // offset 0x18DC, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0x18E0, size 0x1, align 1
    char _pad_18E1[0x3]; // offset 0x18E1
    int32 m_nUnloadedModelIndex; // offset 0x18E4, size 0x4, align 4
    int32 m_iNumOwnerValidationRetries; // offset 0x18E8, size 0x4, align 4
    char _pad_18EC[0xC]; // offset 0x18EC
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0x18F8, size 0x4, align 4
    char _pad_18FC[0x4]; // offset 0x18FC
    CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // offset 0x1900, size 0x18, align 8
};
