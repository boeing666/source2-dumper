#pragma once

struct CitadelMusicCueOverrides_t  // sizeof 0x1C8, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CitadelMusicCueData_t m_MusicStateDefault; // offset 0x0, size 0x98, align 8
    CitadelMusicCueData_t m_MusicStateAmber; // offset 0x98, size 0x98, align 8
    CitadelMusicCueData_t m_MusicStateSapphire; // offset 0x130, size 0x98, align 8
};
