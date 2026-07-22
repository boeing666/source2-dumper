#pragma once

struct CitadelMusicCues_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlOrderedMap< EMusicState_t, CitadelMusicCueOverrides_t > m_MusicStateData; // offset 0x0, size 0x28, align 8
};
