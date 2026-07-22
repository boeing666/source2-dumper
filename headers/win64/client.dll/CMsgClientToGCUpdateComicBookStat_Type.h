#pragma once

enum CMsgClientToGCUpdateComicBookStat_Type : uint32_t  // sizeof 0x4
{
    CMsgClientToGCUpdateComicBookStat_Type_HighestPageRead = 1,
    CMsgClientToGCUpdateComicBookStat_Type_SecondsSpentReading = 2,
    CMsgClientToGCUpdateComicBookStat_Type_HighestPercentRead = 3,
};
