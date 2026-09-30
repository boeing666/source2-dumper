#pragma once

enum SndBeatKeyType_t : uint32_t  // sizeof 0x4
{
    eSndBeatPatternTypeNone = 0,
    eSndBeatPatternTypeKeys = 1,
    eSndBeatPatternTypeKeyedFloats = 2,
    eSndBeatPatternTypeKeyedSndEvts = 3,
    eSndBeatPatternTypeKeyedMidi = 4,
};
