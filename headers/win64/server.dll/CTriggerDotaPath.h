#pragma once

class CTriggerDotaPath : public CBaseTrigger /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CHandle< CDotaMoveSpeedModifierPath > m_path; // offset 0xA30, size 0x4, align 4
    char _pad_0A34[0x4]; // offset 0xA34
};
