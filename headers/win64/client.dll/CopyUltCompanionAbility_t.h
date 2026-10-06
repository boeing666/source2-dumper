#pragma once

struct CopyUltCompanionAbility_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSubclassName< 4 > m_Ultimate; // offset 0x0, size 0x10, align 8
    CSubclassName< 4 > m_Companion; // offset 0x10, size 0x10, align 8 | MPropertyDescription
};
