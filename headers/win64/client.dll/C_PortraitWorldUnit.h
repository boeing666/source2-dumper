#pragma once

class C_PortraitWorldUnit : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xFD8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xE90]; // offset 0x0
    bool m_bAnimateCloth; // offset 0xE90, size 0x1, align 1
    bool m_bClothGroundCollision; // offset 0xE91, size 0x1, align 1
    char _pad_0E92[0x6]; // offset 0xE92
    CUtlSymbolLarge m_strGraphBaseState; // offset 0xE98, size 0x8, align 8
    CUtlSymbolLarge m_sceneName; // offset 0xEA0, size 0x8, align 8
    char _pad_0EA8[0x130]; // offset 0xEA8
};
