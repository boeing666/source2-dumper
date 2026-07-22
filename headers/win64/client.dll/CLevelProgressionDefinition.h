#pragma once

class CLevelProgressionDefinition  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    EBetweenValueBehavior m_eBetweenBehavior; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlOrderedMap< int32, float32 > m_mapLevelsToValue; // offset 0x8, size 0x28, align 8
};
