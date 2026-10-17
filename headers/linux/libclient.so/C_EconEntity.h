#pragma once

class C_EconEntity : public C_BaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0xD38*/  // sizeof 0xEC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD48]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xD48, size 0x140, align 255
    bool m_bClientside; // offset 0xE88, size 0x1, align 1
    char _pad_0E89[0x3]; // offset 0xE89
    EconEntityParticleDisableMode_t m_nDisableMode; // offset 0xE8C, size 0x4, align 4
    bool m_bParticleSystemsCreated; // offset 0xE90, size 0x1, align 1
    bool m_bForceDestroyAttachedParticlesImmediately; // offset 0xE91, size 0x1, align 1
    char _pad_0E92[0x6]; // offset 0xE92
    CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // offset 0xE98, size 0x18, align 8
    CHandle< CBaseAnimatingActivity > m_hViewmodelAttachment; // offset 0xEB0, size 0x4, align 4
    int32 m_iOldTeam; // offset 0xEB4, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0xEB8, size 0x1, align 1
    style_index_t m_iOldStyle; // offset 0xEB9, size 0x1, align 255
    char _pad_0EBA[0x2]; // offset 0xEBA
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0xEBC, size 0x4, align 4
};
