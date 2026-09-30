#pragma once

class CTriggerItemShop : public CBaseTrigger /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x9F0, size 0x20, align 255
    CUtlSymbolLarge m_iszSoundName; // offset 0xA10, size 0x8, align 8
    int32 m_iLane; // offset 0xA18, size 0x4, align 4
    Vector m_vAudioOffset; // offset 0xA1C, size 0xC, align 4
};
