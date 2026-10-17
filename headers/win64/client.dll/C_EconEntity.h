#pragma once

class C_EconEntity : public C_BaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0xBB0*/  // sizeof 0xD38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xBC0, size 0x140, align 255
    bool m_bClientside; // offset 0xD00, size 0x1, align 1
    char _pad_0D01[0x3]; // offset 0xD01
    EconEntityParticleDisableMode_t m_nDisableMode; // offset 0xD04, size 0x4, align 4
    bool m_bParticleSystemsCreated; // offset 0xD08, size 0x1, align 1
    bool m_bForceDestroyAttachedParticlesImmediately; // offset 0xD09, size 0x1, align 1
    char _pad_0D0A[0x6]; // offset 0xD0A
    CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // offset 0xD10, size 0x18, align 8
    CHandle< CBaseAnimatingActivity > m_hViewmodelAttachment; // offset 0xD28, size 0x4, align 4
    int32 m_iOldTeam; // offset 0xD2C, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0xD30, size 0x1, align 1
    style_index_t m_iOldStyle; // offset 0xD31, size 0x1, align 255
    char _pad_0D32[0x2]; // offset 0xD32
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0xD34, size 0x4, align 4
};
