#pragma once

enum ECandyShopRewardType : uint32_t  // sizeof 0x4
{
    k_eCandyShopRewardType_None = 0,
    k_eCandyShopRewardType_Item = 1,
    k_eCandyShopRewardType_EventAction = 2,
    k_eCandyShopRewardType_EventPoints = 3,
};
