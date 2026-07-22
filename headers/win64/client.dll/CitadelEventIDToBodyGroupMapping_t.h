#pragma once

struct CitadelEventIDToBodyGroupMapping_t  // sizeof 0x28, align 0x8 (client) {MModelGameData MGetKV3ClassDefaults}
{
    CUtlOrderedMap< CGlobalSymbol, CUtlVector< CitadelBodygroupSetting_t > > m_mapIDToSettings; // offset 0x0, size 0x28, align 8 | MPropertyDescription MPropertyFriendlyName
};
