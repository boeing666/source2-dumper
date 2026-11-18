#pragma once

class CTriggerDotaPath : public CBaseTrigger /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD0C]; // offset 0x0
    CHandle< CDotaMoveSpeedModifierPath > m_path; // offset 0xD0C, size 0x4, align 4
};
