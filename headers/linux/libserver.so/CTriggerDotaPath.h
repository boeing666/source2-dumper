#pragma once

class CTriggerDotaPath : public CBaseTrigger /*0x0*/  // sizeof 0xCA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA4]; // offset 0x0
    CHandle< CDotaMoveSpeedModifierPath > m_path; // offset 0xCA4, size 0x4, align 4
};
