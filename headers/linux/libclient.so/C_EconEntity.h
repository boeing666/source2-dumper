#pragma once

class C_EconEntity : public C_BaseAnimatingOverlay /*0x0*/, public IHasAttributes /*0xC48*/  // sizeof 0xDE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC58]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xC58, size 0x140, align 255
    bool m_bClientside; // offset 0xD98, size 0x1, align 1
    char _pad_0D99[0x3]; // offset 0xD99
    EconEntityParticleDisableMode_t m_nDisableMode; // offset 0xD9C, size 0x4, align 4
    bool m_bParticleSystemsCreated; // offset 0xDA0, size 0x1, align 1
    bool m_bForceDestroyAttachedParticlesImmediately; // offset 0xDA1, size 0x1, align 1
    char _pad_0DA2[0x6]; // offset 0xDA2
    CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // offset 0xDA8, size 0x18, align 8
    CHandle< CBaseAnimatingActivity > m_hViewmodelAttachment; // offset 0xDC0, size 0x4, align 4
    int32 m_iOldTeam; // offset 0xDC4, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0xDC8, size 0x1, align 1
    style_index_t m_iOldStyle; // offset 0xDC9, size 0x1, align 255
    char _pad_0DCA[0x2]; // offset 0xDCA
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0xDCC, size 0x4, align 4
    CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // offset 0xDD0, size 0x18, align 8
};
