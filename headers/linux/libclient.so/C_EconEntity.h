#pragma once

class C_EconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0x1108*/  // sizeof 0x2580, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1118]; // offset 0x0
    float32 m_flFlexDelayTime; // offset 0x1118, size 0x4, align 4
    char _pad_111C[0x4]; // offset 0x111C
    float32* m_flFlexDelayedWeight; // offset 0x1120, size 0x8, align 8
    bool m_bAttributesInitialized; // offset 0x1128, size 0x1, align 1
    char _pad_1129[0x7]; // offset 0x1129
    C_AttributeContainer m_AttributeManager; // offset 0x1130, size 0x13D8, align 255
    uint32 m_OriginalOwnerXuidLow; // offset 0x2508, size 0x4, align 4
    uint32 m_OriginalOwnerXuidHigh; // offset 0x250C, size 0x4, align 4
    int32 m_nFallbackPaintKit; // offset 0x2510, size 0x4, align 4
    int32 m_nFallbackSeed; // offset 0x2514, size 0x4, align 4
    float32 m_flFallbackWear; // offset 0x2518, size 0x4, align 4
    int32 m_nFallbackStatTrak; // offset 0x251C, size 0x4, align 4
    bool m_bClientside; // offset 0x2520, size 0x1, align 1
    bool m_bParticleSystemsCreated; // offset 0x2521, size 0x1, align 1
    char _pad_2522[0x6]; // offset 0x2522
    CUtlVector< int32 > m_vecAttachedParticles; // offset 0x2528, size 0x18, align 8
    CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // offset 0x2540, size 0x4, align 4
    int32 m_iOldTeam; // offset 0x2544, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0x2548, size 0x1, align 1
    char _pad_2549[0x3]; // offset 0x2549
    int32 m_nUnloadedModelIndex; // offset 0x254C, size 0x4, align 4
    int32 m_iNumOwnerValidationRetries; // offset 0x2550, size 0x4, align 4
    char _pad_2554[0xC]; // offset 0x2554
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0x2560, size 0x4, align 4
    char _pad_2564[0x4]; // offset 0x2564
    CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // offset 0x2568, size 0x18, align 8
};
