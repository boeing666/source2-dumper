#pragma once

class C_PortraitWorldUnit : public C_BaseCombatCharacter /*0x0*/  // sizeof 0xFD0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xE88]; // offset 0x0
    bool m_bAnimateCloth; // offset 0xE88, size 0x1, align 1
    bool m_bClothGroundCollision; // offset 0xE89, size 0x1, align 1
    char _pad_0E8A[0x6]; // offset 0xE8A
    CUtlSymbolLarge m_strGraphBaseState; // offset 0xE90, size 0x8, align 8
    CUtlSymbolLarge m_sceneName; // offset 0xE98, size 0x8, align 8
    char _pad_0EA0[0x130]; // offset 0xEA0
};
