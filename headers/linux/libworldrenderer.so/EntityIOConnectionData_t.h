#pragma once

struct EntityIOConnectionData_t  // sizeof 0x40, align 0x8 (worldrenderer) {MGetKV3ClassDefaults}
{
    CUtlString m_outputName; // offset 0x0, size 0x8, align 8
    uint32 m_targetType; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_targetName; // offset 0x10, size 0x8, align 8
    CUtlString m_inputName; // offset 0x18, size 0x8, align 8
    CUtlString m_overrideParam; // offset 0x20, size 0x8, align 8
    float32 m_flDelay; // offset 0x28, size 0x4, align 4
    int32 m_nTimesToFire; // offset 0x2C, size 0x4, align 4
    KeyValues3 m_paramMap; // offset 0x30, size 0x10, align 8
};
