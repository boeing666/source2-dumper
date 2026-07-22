#pragma once

enum ChatMsgPingMarkerInfo : uint32_t  // sizeof 0x4
{
    k_EPingMarkerInfo_ShowMarkerAndSound = 0,
    k_EPingMarkerInfo_ShowMarkerOnSender = 1,
    k_EPingMarkerInfo_HideMarkerAndSound = 2,
    k_EPingMarkerInfo_OnlyShowMarker = 3,
    k_EPingMarkerInfo_OnlyPlaySound = 4,
    k_EPingMarkerInfo_OnlyMiniMap = 5,
    k_EPingMarkerInfo_NoMarkerYesSoundMiniMap = 6,
};
