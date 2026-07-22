#pragma once

enum EGCEventClientMessages : uint32_t  // sizeof 0x4
{
    k_EMsgClientToGCGetEventPoints = 15000,
    k_EMsgClientToGCGetEventPointsResponse = 15001,
    k_EMsgGCToClientEventPointsUpdated = 15002,
};
