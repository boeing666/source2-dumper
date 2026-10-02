#pragma once

class C_EconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xDF8*/  // sizeof 0xF98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE08]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xE08, size 0x158, align 255
    bool m_bClientside; // offset 0xF60, size 0x1, align 1
    char _pad_0F61[0x3]; // offset 0xF61
    EconEntityParticleDisableMode_t m_nDisableMode; // offset 0xF64, size 0x4, align 4
    bool m_bParticleSystemsCreated; // offset 0xF68, size 0x1, align 1
    bool m_bForceDestroyAttachedParticlesImmediately; // offset 0xF69, size 0x1, align 1
    char _pad_0F6A[0x6]; // offset 0xF6A
    CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // offset 0xF70, size 0x18, align 8
    CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // offset 0xF88, size 0x4, align 4
    int32 m_iOldTeam; // offset 0xF8C, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0xF90, size 0x1, align 1
    style_index_t m_iOldStyle; // offset 0xF91, size 0x1, align 255
    char _pad_0F92[0x2]; // offset 0xF92
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0xF94, size 0x4, align 4
};
