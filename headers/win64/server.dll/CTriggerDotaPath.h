#pragma once

class CTriggerDotaPath : public CBaseTrigger /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    CHandle< CDotaMoveSpeedModifierPath > m_path; // offset 0x8F0, size 0x4, align 4
    char _pad_08F4[0x4]; // offset 0x8F4
};
