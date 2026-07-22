#pragma once

class CSpeechBubbleInfo  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    char[256] m_LocalizationStr; // offset 0x30, size 0x100, align 1
    CHandle< CBaseEntity > m_hNPC; // offset 0x130, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x134, size 0x4, align 255
    float32 m_flDuration; // offset 0x138, size 0x4, align 4
    uint32 m_unOffsetX; // offset 0x13C, size 0x4, align 4
    uint32 m_unOffsetY; // offset 0x140, size 0x4, align 4
    uint16 m_unCount; // offset 0x144, size 0x2, align 2
    char _pad_0146[0x2]; // offset 0x146
};
