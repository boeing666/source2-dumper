#pragma once

struct ParticleControlPointDriver_t  // sizeof 0x40, align 0x8 (particles) {MGetKV3ClassDefaults}
{
    ParticleParamID_t m_iControlPoint; // offset 0x0, size 0x10, align 8
    ParticleAttachment_t m_iAttachType; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlString m_attachmentName; // offset 0x18, size 0x8, align 8
    Vector m_vecOffset; // offset 0x20, size 0xC, align 4
    QAngle m_angOffset; // offset 0x2C, size 0xC, align 4
    CUtlString m_entityName; // offset 0x38, size 0x8, align 8
};
