#pragma once

class CBasePlatTrain : public CBaseToggle /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x800]; // offset 0x0
    CUtlSymbolLarge m_NoiseMoving; // offset 0x800, size 0x8, align 8
    CUtlSymbolLarge m_NoiseArrived; // offset 0x808, size 0x8, align 8
    char _pad_0810[0x8]; // offset 0x810
    float32 m_volume; // offset 0x818, size 0x4, align 4
    float32 m_flTWidth; // offset 0x81C, size 0x4, align 4
    float32 m_flTLength; // offset 0x820, size 0x4, align 4
    char _pad_0824[0x4]; // offset 0x824
};
