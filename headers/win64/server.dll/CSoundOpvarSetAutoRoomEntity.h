#pragma once

class CSoundOpvarSetAutoRoomEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x630]; // offset 0x0
    CUtlVector< SoundOpvarTraceResult_t > m_traceResults; // offset 0x630, size 0x18, align 8
    CUtlVector< AutoRoomDoorwayPairs_t > m_doorwayPairs; // offset 0x648, size 0x18, align 8
    float32 m_flSize; // offset 0x660, size 0x4, align 4
    float32 m_flHeightTolerance; // offset 0x664, size 0x4, align 4
    float32 m_flSizeSqr; // offset 0x668, size 0x4, align 4
    char _pad_066C[0x4]; // offset 0x66C
};
