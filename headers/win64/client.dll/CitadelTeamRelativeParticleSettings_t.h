#pragma once

struct CitadelTeamRelativeParticleSettings_t  // sizeof 0x30, align 0x8 (client) {MModelGameData MFgdHelper MGetKV3ClassDefaults}
{
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_strFriendlyParticle; // offset 0x0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_strEnemyParticle; // offset 0x8, size 0x8, align 8
    bool m_bUseConfig; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
    CUtlString m_strConfigName; // offset 0x18, size 0x8, align 8 | MPropertySuppressExpr
    ParticleAttachment_t m_AttachmentType; // offset 0x20, size 0x4, align 4 | MPropertySuppressExpr
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_strAttachmentName; // offset 0x28, size 0x8, align 8 | MPropertySuppressExpr MPropertyCustomFGDType
};
