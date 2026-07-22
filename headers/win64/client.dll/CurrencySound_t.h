#pragma once

struct CurrencySound_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlOrderedMap< ECurrencySource, CSoundEventName > m_mapSourceSounds; // offset 0x0, size 0x28, align 8
};
