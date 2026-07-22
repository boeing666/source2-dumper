#pragma once

enum EItemSuggestPreference : uint32_t  // sizeof 0x4
{
    k_EItemSuggestPreference_None = 0,
    k_EItemSuggestPreference_Liked = 1,
    k_EItemSuggestPreference_Disliked = 2,
};
