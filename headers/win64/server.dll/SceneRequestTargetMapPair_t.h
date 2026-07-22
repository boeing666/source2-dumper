#pragma once

struct SceneRequestTargetMapPair_t  // sizeof 0x10, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CUtlSymbolLarge m_actorName; // offset 0x0, size 0x8, align 8
    CUtlSymbolLarge m_entityName; // offset 0x8, size 0x8, align 8
};
