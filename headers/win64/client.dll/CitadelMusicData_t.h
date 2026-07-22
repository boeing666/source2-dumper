#pragma once

struct CitadelMusicData_t  // sizeof 0x48, align 0x8 (client) {MVDataRoot MVDataSingleton MGetKV3ClassDefaults}
{
    CitadelMusicCues_t m_MusicCues; // offset 0x0, size 0x28, align 8
    CUtlHashtable< CUtlString, CitadelArpeggiator_t > m_Arpeggiators; // offset 0x28, size 0x20, align 8
};
