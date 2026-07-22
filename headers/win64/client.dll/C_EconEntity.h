#pragma once

class C_EconEntity : public C_BaseFlex /*0x0*/, public IHasAttributes /*0xE60*/  // sizeof 0x1018, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xE70]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xE70, size 0x158, align 255 | MNetworkEnable
    bool m_bClientside; // offset 0xFC8, size 0x1, align 1
    char _pad_0FC9[0x3]; // offset 0xFC9
    EconEntityParticleDisableMode_t m_nDisableMode; // offset 0xFCC, size 0x4, align 4
    bool m_bParticleSystemsCreated; // offset 0xFD0, size 0x1, align 1
    bool m_bForceDestroyAttachedParticlesImmediately; // offset 0xFD1, size 0x1, align 1
    char _pad_0FD2[0x6]; // offset 0xFD2
    CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // offset 0xFD8, size 0x18, align 8
    CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // offset 0xFF0, size 0x4, align 4
    int32 m_iOldTeam; // offset 0xFF4, size 0x4, align 4
    bool m_bAttachmentDirty; // offset 0xFF8, size 0x1, align 1
    style_index_t m_iOldStyle; // offset 0xFF9, size 0x1, align 255
    char _pad_0FFA[0x2]; // offset 0xFFA
    CHandle< C_BaseEntity > m_hOldProvidee; // offset 0xFFC, size 0x4, align 4
    CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // offset 0x1000, size 0x18, align 8
};
