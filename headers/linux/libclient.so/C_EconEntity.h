#pragma once

class C_EconEntity : public C_BaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0xDA0*/  // sizeof 0xF28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDB0]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xDB0, size 0x140, align 255
    bool m_bClientside; // offset 0xEF0, size 0x1, align 1
    char _pad_0EF1[0x3]; // offset 0xEF1
    EconEntityParticleDisableMode_t m_nDisableMode; // offset 0xEF4, size 0x4, align 4
    bool m_bParticleSystemsCreated; // offset 0xEF8, size 0x1, align 1
    bool m_bForceDestroyAttachedParticlesImmediately; // offset 0xEF9, size 0x1, align 1
    char _pad_0EFA[0x6]; // offset 0xEFA
    CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // offset 0xF00, size 0x18, align 8
    CHandle< CBaseAnimatingActivity > m_hViewmodelAttachment; // offset 0xF18, size 0x4, align 4
    int32 m_iOldTeam; // offset 0xF1C, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0xF20, size 0x1, align 1
    style_index_t m_iOldStyle; // offset 0xF21, size 0x1, align 255
    char _pad_0F22[0x2]; // offset 0xF22
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0xF24, size 0x4, align 4
};
