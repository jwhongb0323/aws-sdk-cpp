﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/OAuth2Defaults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

OAuth2Defaults::OAuth2Defaults() : 
    m_oauthScopesHasBeenSet(false),
    m_tokenUrlsHasBeenSet(false),
    m_authCodeUrlsHasBeenSet(false),
    m_oauth2GrantTypesSupportedHasBeenSet(false)
{
}

OAuth2Defaults::OAuth2Defaults(JsonView jsonValue) : 
    m_oauthScopesHasBeenSet(false),
    m_tokenUrlsHasBeenSet(false),
    m_authCodeUrlsHasBeenSet(false),
    m_oauth2GrantTypesSupportedHasBeenSet(false)
{
  *this = jsonValue;
}

OAuth2Defaults& OAuth2Defaults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oauthScopes"))
  {
    Array<JsonView> oauthScopesJsonList = jsonValue.GetArray("oauthScopes");
    for(unsigned oauthScopesIndex = 0; oauthScopesIndex < oauthScopesJsonList.GetLength(); ++oauthScopesIndex)
    {
      m_oauthScopes.push_back(oauthScopesJsonList[oauthScopesIndex].AsString());
    }
    m_oauthScopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenUrls"))
  {
    Array<JsonView> tokenUrlsJsonList = jsonValue.GetArray("tokenUrls");
    for(unsigned tokenUrlsIndex = 0; tokenUrlsIndex < tokenUrlsJsonList.GetLength(); ++tokenUrlsIndex)
    {
      m_tokenUrls.push_back(tokenUrlsJsonList[tokenUrlsIndex].AsString());
    }
    m_tokenUrlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authCodeUrls"))
  {
    Array<JsonView> authCodeUrlsJsonList = jsonValue.GetArray("authCodeUrls");
    for(unsigned authCodeUrlsIndex = 0; authCodeUrlsIndex < authCodeUrlsJsonList.GetLength(); ++authCodeUrlsIndex)
    {
      m_authCodeUrls.push_back(authCodeUrlsJsonList[authCodeUrlsIndex].AsString());
    }
    m_authCodeUrlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oauth2GrantTypesSupported"))
  {
    Array<JsonView> oauth2GrantTypesSupportedJsonList = jsonValue.GetArray("oauth2GrantTypesSupported");
    for(unsigned oauth2GrantTypesSupportedIndex = 0; oauth2GrantTypesSupportedIndex < oauth2GrantTypesSupportedJsonList.GetLength(); ++oauth2GrantTypesSupportedIndex)
    {
      m_oauth2GrantTypesSupported.push_back(OAuth2GrantTypeMapper::GetOAuth2GrantTypeForName(oauth2GrantTypesSupportedJsonList[oauth2GrantTypesSupportedIndex].AsString()));
    }
    m_oauth2GrantTypesSupportedHasBeenSet = true;
  }

  return *this;
}

JsonValue OAuth2Defaults::Jsonize() const
{
  JsonValue payload;

  if(m_oauthScopesHasBeenSet)
  {
   Array<JsonValue> oauthScopesJsonList(m_oauthScopes.size());
   for(unsigned oauthScopesIndex = 0; oauthScopesIndex < oauthScopesJsonList.GetLength(); ++oauthScopesIndex)
   {
     oauthScopesJsonList[oauthScopesIndex].AsString(m_oauthScopes[oauthScopesIndex]);
   }
   payload.WithArray("oauthScopes", std::move(oauthScopesJsonList));

  }

  if(m_tokenUrlsHasBeenSet)
  {
   Array<JsonValue> tokenUrlsJsonList(m_tokenUrls.size());
   for(unsigned tokenUrlsIndex = 0; tokenUrlsIndex < tokenUrlsJsonList.GetLength(); ++tokenUrlsIndex)
   {
     tokenUrlsJsonList[tokenUrlsIndex].AsString(m_tokenUrls[tokenUrlsIndex]);
   }
   payload.WithArray("tokenUrls", std::move(tokenUrlsJsonList));

  }

  if(m_authCodeUrlsHasBeenSet)
  {
   Array<JsonValue> authCodeUrlsJsonList(m_authCodeUrls.size());
   for(unsigned authCodeUrlsIndex = 0; authCodeUrlsIndex < authCodeUrlsJsonList.GetLength(); ++authCodeUrlsIndex)
   {
     authCodeUrlsJsonList[authCodeUrlsIndex].AsString(m_authCodeUrls[authCodeUrlsIndex]);
   }
   payload.WithArray("authCodeUrls", std::move(authCodeUrlsJsonList));

  }

  if(m_oauth2GrantTypesSupportedHasBeenSet)
  {
   Array<JsonValue> oauth2GrantTypesSupportedJsonList(m_oauth2GrantTypesSupported.size());
   for(unsigned oauth2GrantTypesSupportedIndex = 0; oauth2GrantTypesSupportedIndex < oauth2GrantTypesSupportedJsonList.GetLength(); ++oauth2GrantTypesSupportedIndex)
   {
     oauth2GrantTypesSupportedJsonList[oauth2GrantTypesSupportedIndex].AsString(OAuth2GrantTypeMapper::GetNameForOAuth2GrantType(m_oauth2GrantTypesSupported[oauth2GrantTypesSupportedIndex]));
   }
   payload.WithArray("oauth2GrantTypesSupported", std::move(oauth2GrantTypesSupportedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
