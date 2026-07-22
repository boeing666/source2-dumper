#pragma once

struct AmbientParticleSettings_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults}
{
    int32 m_nCP; // offset 0x0, size 0x4, align 4
    ParticleAttachment_t m_eAttachmentType; // offset 0x4, size 0x4, align 4
    CUtlString m_strAttachmentName; // offset 0x8, size 0x8, align 8
};
