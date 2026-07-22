#pragma once

class CTriggerDotaPath : public CBaseTrigger /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC4]; // offset 0x0
    CHandle< CDotaMoveSpeedModifierPath > m_path; // offset 0xBC4, size 0x4, align 4
};
