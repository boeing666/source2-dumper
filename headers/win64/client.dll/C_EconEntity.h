#pragma once

class C_EconEntity : public C_BaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0xC10*/  // sizeof 0xD98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC20]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xC20, size 0x140, align 255
    bool m_bClientside; // offset 0xD60, size 0x1, align 1
    char _pad_0D61[0x3]; // offset 0xD61
    EconEntityParticleDisableMode_t m_nDisableMode; // offset 0xD64, size 0x4, align 4
    bool m_bParticleSystemsCreated; // offset 0xD68, size 0x1, align 1
    bool m_bForceDestroyAttachedParticlesImmediately; // offset 0xD69, size 0x1, align 1
    char _pad_0D6A[0x6]; // offset 0xD6A
    CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // offset 0xD70, size 0x18, align 8
    CHandle< CBaseAnimatingActivity > m_hViewmodelAttachment; // offset 0xD88, size 0x4, align 4
    int32 m_iOldTeam; // offset 0xD8C, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0xD90, size 0x1, align 1
    style_index_t m_iOldStyle; // offset 0xD91, size 0x1, align 255
    char _pad_0D92[0x2]; // offset 0xD92
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0xD94, size 0x4, align 4
};
