#pragma once

class CCitadelDruidPlantShield : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    bool m_bSolid; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x3]; // offset 0xC41
    VectorWS m_vStartPos; // offset 0xC44, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0xC50, size 0xC, align 4
    GameTime_t m_flStartGrowTime; // offset 0xC5C, size 0x4, align 255
    GameTime_t m_flEndGrowTime; // offset 0xC60, size 0x4, align 255
    char _pad_0C64[0xC]; // offset 0xC64
};
