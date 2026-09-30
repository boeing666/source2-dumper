#pragma once

struct CitadelMusicCueOverrides_t  // sizeof 0x1E0, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CitadelMusicCueData_t m_MusicStateDefault; // offset 0x0, size 0xA0, align 8
    CitadelMusicCueData_t m_MusicStateAmber; // offset 0xA0, size 0xA0, align 8
    CitadelMusicCueData_t m_MusicStateSapphire; // offset 0x140, size 0xA0, align 8
};
