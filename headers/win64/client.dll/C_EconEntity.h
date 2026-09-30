#pragma once

class C_EconEntity : public CBaseAnimGraph /*0x0*/, public IHasAttributes /*0xDA0*/  // sizeof 0xF40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDB0]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xDB0, size 0x158, align 255
    bool m_bClientside; // offset 0xF08, size 0x1, align 1
    char _pad_0F09[0x3]; // offset 0xF09
    EconEntityParticleDisableMode_t m_nDisableMode; // offset 0xF0C, size 0x4, align 4
    bool m_bParticleSystemsCreated; // offset 0xF10, size 0x1, align 1
    bool m_bForceDestroyAttachedParticlesImmediately; // offset 0xF11, size 0x1, align 1
    char _pad_0F12[0x6]; // offset 0xF12
    CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // offset 0xF18, size 0x18, align 8
    CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // offset 0xF30, size 0x4, align 4
    int32 m_iOldTeam; // offset 0xF34, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0xF38, size 0x1, align 1
    style_index_t m_iOldStyle; // offset 0xF39, size 0x1, align 255
    char _pad_0F3A[0x2]; // offset 0xF3A
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0xF3C, size 0x4, align 4
};
