#pragma once

class C_EconEntity : public C_BaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0xAC0*/  // sizeof 0xC60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAD0]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xAD0, size 0x140, align 255
    bool m_bClientside; // offset 0xC10, size 0x1, align 1
    char _pad_0C11[0x3]; // offset 0xC11
    EconEntityParticleDisableMode_t m_nDisableMode; // offset 0xC14, size 0x4, align 4
    bool m_bParticleSystemsCreated; // offset 0xC18, size 0x1, align 1
    bool m_bForceDestroyAttachedParticlesImmediately; // offset 0xC19, size 0x1, align 1
    char _pad_0C1A[0x6]; // offset 0xC1A
    CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // offset 0xC20, size 0x18, align 8
    CHandle< CBaseAnimatingActivity > m_hViewmodelAttachment; // offset 0xC38, size 0x4, align 4
    int32 m_iOldTeam; // offset 0xC3C, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0xC40, size 0x1, align 1
    style_index_t m_iOldStyle; // offset 0xC41, size 0x1, align 255
    char _pad_0C42[0x2]; // offset 0xC42
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0xC44, size 0x4, align 4
    CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // offset 0xC48, size 0x18, align 8
};
