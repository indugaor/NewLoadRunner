Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("r3.o.lencr.org", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xB5\\xEFc\\x99\\xFA\\xFFuk\\xAE\\xC1\\x96ym\\xA7\\xBDi\\xCB", 
		LAST);

	web_custom_request("r3.o.lencr.org_2", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\x0F\\xE5\\x1A\\x0E}\\x8A\\xBD\\x03\\x1F\\x8E\\x80I\\xDE\\x03\\x90\\xEC_", 
		LAST);

	web_custom_request("r3.o.lencr.org_3", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04i\\x93\\xD4}c\\xDB9J\\xBAi\\x8B*r\\x7F\\xD4\\xCC\\xA5", 
		LAST);

	web_custom_request("r3.o.lencr.org_4", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xB5\\xEFc\\x99\\xFA\\xFFuk\\xAE\\xC1\\x96ym\\xA7\\xBDi\\xCB", 
		LAST);

	web_custom_request("r3.o.lencr.org_5", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xCA\\xE2aQ\\xCB\\xE8\\xFE\\xE7\\xB6\\xD35\ts<YKb", 
		LAST);

	web_custom_request("r3.o.lencr.org_6", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x038.\\xEF\\xAAG\\x99\\xEE\\xC7\\xD7\\xE9\\xBE\\xB7o\\xBBfr\\xB6", 
		LAST);

	web_url("www.tastynibbles.in", 
		"URL=https://www.tastynibbles.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://contile.services.mozilla.com/v1/tiles", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_custom_request("spocs", 
		"URL=https://spocs.getpocket.com/spocs", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"pocket_id\":\"{e83dc9e5-3af7-4a1f-9632-fd9b5e6b6f2c}\",\"version\":2,\"consumer_key\":\"40249-e88c401e1b1f2242d9e441c4\",\"placements\":[{\"name\":\"sponsored-topsites\",\"ad_types\":[3120],\"zone_ids\":[280143]}]}", 
		LAST);

	web_custom_request("r3.o.lencr.org_7", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04ZC\\x95t\\x80\\x04+\\x1E\\x82\\xA3\\x1Co\\x86\\xD5\\xE1\\xA8\\xAA", 
		LAST);

	web_custom_request("r3.o.lencr.org_8", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04ZC\\x95t\\x80\\x04+\\x1E\\x82\\xA3\\x1Co\\x86\\xD5\\xE1\\xA8\\xAA", 
		LAST);

	web_custom_request("cfr-v1-en-GB", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-en-GB", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x01\\xE0c\\x8B\\x9A\\xDF\\x9CB\\x9B\\x90\\xA4n\\xB9\\x86\\x06\\x06", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06'd\\xBD\\xAC\\x97O,\nP\\xA8l\\xF3\\xF9\\x00\\xA6", 
		LAST);

	web_custom_request("ecc95c64-c10d-428f-b6aa-80db7d253a15", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/ecc95c64-c10d-428f-b6aa-80db7d253a15", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":2,\"start_time\":\"2024-02-23T14:30:08.000+05:30\",\"end_time\":\"2024-02-23T14:31:06.765+05:30\",\"reason\":\"startup\",\"experiments\":{\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"windows_build_number\":19045,\""
		"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2023-02-13+05:30\",\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"locale\":\"en-GB\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_build\":\"20240213221259\",\"app_display_version\":\"123.0\"},\"metrics\":{\"boolean\":{\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_data_collection\":false,\"urlbar.pref_suggest_nonsponsored\":false,\""
		"urlbar.pref_suggest_topsites\":true},\"uuid\":{\"legacy.telemetry.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"},\"quantity\":{\"urlbar.pref_max_results\":10}},\"events\":[{\"timestamp\":0,\"category\":\"fog.validation\",\"name\":\"validate_early_event\"},{\"timestamp\":820,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"setting\":\"required\"}},{\"timestamp\":1253,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"feature\":\""
		"syncAfterTabChange\",\"experiment\":\"task-continuity-sync-after-tab-change-rollout-40\",\"reason\":\"invalid-feature\"}},{\"timestamp\":1253,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"reason\":\"invalid-feature\",\"experiment\":\"task-continuity-sync-after-tab-change-rollout-60\",\"feature\":\"syncAfterTabChange\"}},{\"timestamp\":1253,\"category\":\"nimbus_events\",\"name\":\"is_ready\"}]}", 
		LAST);

	web_custom_request("r3.o.lencr.org_9", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x03\\x0F\\xE5\\x1A\\x0E}\\x8A\\xBD\\x03\\x1F\\x8E\\x80I\\xDE\\x03\\x90\\xEC_", 
		LAST);

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/123.0/20240213221259/WINNT_x86_64-msvc-x64/en-GB/release/Windows_NT%252010.0.0.0.19045.3324%2520(x64)/ISET%3ASSE4_2%2CMEM%3A12287/default/default/update.xml?force=1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("r3.o.lencr.org_10", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x04i\\x93\\xD4}c\\xDB9J\\xBAi\\x8B*r\\x7F\\xD4\\xCC\\xA5", 
		LAST);

	web_custom_request("e1.o.lencr.org", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xABc'\\xF2@\\xBE\\xD6\\xB5\\xC1\\xB5:\\xC0\\xA1\\xCBA1\\x82", 
		LAST);

	web_custom_request("e1.o.lencr.org_2", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xEC\\xDD\\xC6\\x05|\\xBF\\x19\\x00\\x9DH\\xD9\\xA1\\xD9\\xE0\\xEF\\xE3J", 
		LAST);

	web_custom_request("e1.o.lencr.org_3", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\x10\\xDE\\x96~(mmn\\xED\\xEA\\x8A\\x88@\\xAFg=\"", 
		LAST);

	web_custom_request("e1.o.lencr.org_4", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xEC\\xDD\\xC6\\x05|\\xBF\\x19\\x00\\x9DH\\xD9\\xA1\\xD9\\xE0\\xEF\\xE3J", 
		LAST);

	web_custom_request("4acc65dd-ef25-4c5a-9bca-ad903c9b2274", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/4acc65dd-ef25-4c5a-9bca-ad903c9b2274", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":0,\"start_time\":\"2024-02-23T11:11:10.419+05:30\",\"end_time\":\"2024-02-23T11:12:31.877+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.0.0\",\"build_date\":\""
		"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2023-02-13+05:30\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_display_version\":\"122.0.1\",\"app_build\":\"20240205133611\",\"locale\":\"en-GB\",\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\",\"windows_build_number\":19045},\"metrics\":{\"counter\":{\"use.counter.top_level_content_documents_destroyed\":5,\"use.counter.css.doc.css_fill\":1,\"use.counter.css.doc.css_width\":1,\""
		"use.counter.css.doc.css_height\":1,\"use.counter.css.doc.css_stroke\":1,\"use.counter.content_documents_destroyed\":4,\"use.counter.css.doc.css_stroke_width\":1,\"use.counter.css.doc.css_stroke_miterlimit\":1}}}", 
		LAST);

	web_custom_request("d70a6a6a-041b-4ebc-b804-bcb4641ef0bb", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/d70a6a6a-041b-4ebc-b804-bcb4641ef0bb", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":1,\"start_time\":\"2024-02-23T11:11:10.000+05:30\",\"end_time\":\"2024-02-23T14:30:08.425+05:30\",\"reason\":\"startup\",\"experiments\":{\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"build_date\":\"1970-01-01T00:00:00+"
		"00:00\",\"first_run_date\":\"2023-02-13+05:30\",\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\",\"locale\":\"en-GB\",\"app_display_version\":\"122.0.1\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"app_channel\":\"release\",\"app_build\":\"20240205133611\",\"windows_build_number\":19045},\"metrics\":{\"quantity\":{\"urlbar.pref_max_results\":10},\"boolean\":{\"urlbar.pref_suggest_topsites\":true,\"urlbar.pref_suggest_sponsored\":false,\""
		"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_data_collection\":false},\"uuid\":{\"legacy.telemetry.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"}},\"events\":[{\"timestamp\":0,\"category\":\"fog.validation\",\"name\":\"validate_early_event\"},{\"timestamp\":1393,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"setting\":\"disabled\"}},{\"timestamp\":2119,\"category\":\"nimbus_events\",\"name\":\"unenrollment\",\"extra\":{\"branch\":\""
		"sync-after-tab\",\"reason\":\"invalid-branch\",\"experiment\":\"task-continuity-sync-after-tab-change-rollout-40\"}},{\"timestamp\":2119,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"reason\":\"invalid-feature\",\"experiment\":\"task-continuity-sync-after-tab-change-rollout-40\",\"feature\":\"syncAfterTabChange\"}},{\"timestamp\":2119,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"reason\":\"invalid-feature\",\"feature\":\""
		"syncAfterTabChange\",\"experiment\":\"task-continuity-sync-after-tab-change-rollout-60\"}},{\"timestamp\":30502,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"reason\":\"invalid-feature\",\"feature\":\"syncAfterTabChange\",\"experiment\":\"task-continuity-sync-after-tab-change-rollout-40\"}},{\"timestamp\":30502,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"feature\":\"syncAfterTabChange\",\"reason\":\"invalid-feature\",\"experiment\":\""
		"task-continuity-sync-after-tab-change-rollout-60\"}}]}", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_shopify_sa_t=2024-02-23T09%3A01%3A10.463Z; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_shopify_sa_p=; DOMAIN=www.tastynibbles.in");

	web_url("modern", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("r3.o.lencr.org_11", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\nw\\x01o\\xBA\\x95m]P\\xD3\\xEA5\\xE6W\\xF1p\\x17", 
		LAST);

	web_custom_request("ocsp.r2m02.amazontrust.com", 
		"URL=http://ocsp.r2m02.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0F\\x98Z\\xBE\\xB7`\\xE0AC]a\\x8E\\x9A\\xC1\\x01\t", 
		LAST);

	web_url("recommendations", 
		"URL=https://firefox-api-proxy.cdn.mozilla.net/desktop/v1/recommendations?locale=en-GB&region=IN&count=30", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("produce_batch", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678870443},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708678870443}}]}", 
		LAST);

	web_custom_request("5aa3d562-dfa2-423a-8c45-049c91233869", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/metrics/1/5aa3d562-dfa2-423a-8c45-049c91233869", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":2,\"start_time\":\"2024-02-23T11:11:10.000+05:30\",\"end_time\":\"2024-02-23T14:30:08.446+05:30\",\"reason\":\"upgrade\",\"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"first_run_date\":\"2023-02-13+05:30"
		"\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"app_channel\":\"release\",\"app_build\":\"20240205133611\",\"architecture\":\"x86_64\",\"locale\":\"en-GB\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_display_version\":\"122.0.1\",\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\"},\"metrics\":{\"labeled_counter\":{\"power.wakeups_per_process_type\":{\"extension\":2307,\"parent.active\":32665,\"parent.inactive\":8049,\"prealloc\":1079,\"privilegedabout\""
		":1361,\"rdd\":192,\"utility\":96,\"web.background\":49,\"web.foreground\":15662},\"network.data_size_per_type\":{\"__other__\":21550,\"application_other\":4455,\"compressed\":491705,\"ocsp\":15447,\"octet_stream\":2492251,\"text_html\":429641,\"text_json\":66169,\"text_other\":7410,\"text_plain\":15240},\"glean.upload.ping_upload_failure\":{\"recoverable\":1},\"gmp.update_xml_fetch_result\":{\"content_sig_success\":2},\"networking.speculative_connect_outcome\":{\"aborted_socket_limit\":205,\""
		"successful\":138},\"data_storage.entries\":{\"SiteSecurityServiceState\":9},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1,\"metrics\":1,\"newtab\":1,\"use-counters\":1},\"network.data_size_pb_per_type\":{\"__other__\":98851,\"application_other\":31465,\"image\":1608301,\"ocsp\":11760,\"octet_stream\":14013,\"text_css\":128522,\"text_html\":694645,\"text_javascript\":2366951,\"text_json\":72732,\"text_plain\":4306},\"search.service.initialization_status\":{\"success\":1},\""
		"extensions.process_event\":{\"created_fg\":1},\"extensions.startup_cache_read_errors\":{\"NotFoundError\":1},\"power.cpu_time_per_process_type_ms\":{\"extension\":694,\"parent.active\":37981,\"parent.inactive\":8073,\"prealloc\":1909,\"privilegedabout\":915,\"rdd\":351,\"utility\":140,\"web.background\":68,\"web.foreground\":7705}},\"boolean\":{\"newtab.handoff_preference.enabled\":true,\"extensions.use_remote_policy\":true,\"extensions.use_remote_pref\":true},\"labeled_boolean\":{\""
		"data_storage.migration\":{\"SiteSecurityServiceState\":true}},\"memory_distribution\":{\"fog.ipc.buffer_sizes\":{\"values\":{\"3756\":0,\"4095\":0,\"4664\":0,\"189\":0,\"279\":0,\"693\":0,\"165\":2,\"6049\":0,\"122\":0,\"90\":0,\"6596\":0,\"1798\":0,\"4870\":0,\"304\":0,\"663\":0,\"608\":0,\"3024\":0,\"112\":0,\"469\":0,\"2896\":0,\"291\":0,\"145\":2,\"430\":0,\"98\":0,\"635\":0,\"861\":0,\"127\":0,\"2543\":0,\"5311\":1,\"133\":0,\"939\":0,\"1448\":0,\"756\":0,\"86\":0,\"8191\":0,\"4277\":0,\"824"
		"\":0,\"3922\":0,\"117\":0,\"181\":0,\"1961\":0,\"317\":0,\"1166\":1,\"980\":0,\"5086\":0,\"7512\":0,\"2233\":0,\"215\":0,\"6888\":0,\"1327\":0,\"362\":0,\"1386\":0,\"7844\":1,\"1217\":0,\"107\":0,\"197\":0,\"152\":0,\"158\":12,\"3158\":0,\"139\":0,\"1069\":0,\"173\":2,\"2655\":1,\"558\":0,\"1023\":0,\"1116\":0,\"1271\":0,\"5547\":0,\"394\":0,\"255\":1,\"1649\":0,\"206\":0,\"82\":0,\"449\":0,\"103\":0,\"234\":0,\"3444\":1,\"331\":0,\"267\":0,\"7193\":0,\"5792\":0,\"224\":0,\"583\":0,\"724\":0,\""
		"534\":0,\"2047\":0,\"6316\":0,\"2332\":0,\"2138\":0,\"2773\":0,\"4466\":0,\"3596\":0,\"3298\":0,\"789\":0,\"899\":0,\"79\":1,\"1579\":0,\"2435\":0,\"1878\":0,\"412\":0,\"1722\":0,\"94\":0,\"490\":0,\"511\":0,\"1512\":1,\"245\":0,\"346\":0,\"378\":0},\"sum\":25742},\"glean.database.size\":{\"values\":{\"68437\":0,\"65535\":1},\"sum\":67434}},\"uuid\":{\"legacy.telemetry.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"},\"url\":{\"search.engine.default.submission_url\":\"https://www.google.com/"
		"search?client=firefox-b-d&q=\",\"search.engine.private.submission_url\":\"blank:\"},\"custom_distribution\":{\"power.battery.percentage_when_user_active\":{\"values\":{\"15\":0,\"39\":0,\"41\":0,\"4\":0,\"16\":0,\"3\":0,\"86\":0,\"68\":0,\"5\":0,\"21\":0,\"2\":0,\"37\":0,\"53\":0,\"85\":0,\"44\":0,\"71\":0,\"76\":0,\"92\":0,\"13\":0,\"29\":0,\"12\":0,\"42\":0,\"27\":0,\"95\":0,\"60\":0,\"19\":0,\"88\":0,\"90\":0,\"52\":0,\"31\":0,\"98\":0,\"87\":0,\"80\":0,\"89\":0,\"0\":0,\"72\":0,\"73\":0,\"47\""
		":0,\"78\":0,\"77\":0,\"67\":0,\"8\":0,\"23\":0,\"25\":0,\"45\":0,\"22\":0,\"1\":0,\"58\":0,\"33\":0,\"17\":0,\"100\":9,\"6\":0,\"18\":0,\"83\":0,\"50\":0,\"7\":0,\"32\":0,\"34\":0,\"48\":0,\"38\":0,\"93\":0,\"51\":0,\"97\":0,\"61\":0,\"35\":0,\"55\":0,\"64\":0,\"75\":0,\"70\":0,\"57\":0,\"84\":0,\"24\":0,\"96\":0,\"46\":0,\"82\":0,\"10\":0,\"36\":0,\"74\":0,\"91\":0,\"79\":0,\"30\":0,\"28\":0,\"9\":0,\"59\":0,\"81\":0,\"14\":0,\"94\":0,\"26\":0,\"40\":0,\"69\":0,\"65\":0,\"11\":0,\"66\":0,\"49\":0"
		",\"20\":0,\"63\":0,\"43\":0,\"62\":0,\"54\":0,\"56\":0},\"sum\":900},\"timer_thread.timers_fired_per_wakeup\":{\"values\":{\"5\":6,\"2\":162,\"7\":2,\"4\":8,\"13\":0,\"9\":0,\"3\":27,\"11\":0,\"16\":1,\"1\":928,\"20\":0,\"6\":2,\"0\":784},\"sum\":1438}},\"counter\":{\"browser.engagement.active_ticks\":10,\"networking.set_cookie\":56,\"browser.engagement.uri_count\":1,\"power.total_cpu_time_ms\":57836,\"power.total_thread_wakeups\":61460},\"quantity\":{\"fog.max_pings_per_minute\":15,\""
		"extensions.quarantined_domains.listsize\":0,\"extensions.startup_cache_write_bytelength\":111050},\"rate\":{\"networking.set_cookie_foreign\":{\"numerator\":0,\"denominator\":56},\"networking.set_cookie_foreign_partitioned\":{\"numerator\":0,\"denominator\":56},\"networking.set_cookie_partitioned\":{\"numerator\":0,\"denominator\":56}},\"string\":{\"search.engine.default.verified\":\"default\",\"search.engine.private.load_path\":\"\",\"search.engine.default.load_path\":\"[addon]"
		"google@search.mozilla.org\",\"search.engine.default.display_name\":\"Google\",\"search.engine.private.engine_id\":\"\",\"search.engine.private.verified\":\"\",\"search.engine.default.engine_id\":\"google-b-d\",\"extensions.quarantined_domains.listhash\":\"da39a3ee5e6b4b0d3255bfef95601890afd80709\",\"search.engine.private.display_name\":\"\",\"blocklist.mlbf_source\":\"dump_fallback\"},\"timing_distribution\":{\"networking.dns_lookup_time\":{\"values\":{\"25874004\":1,\"4987896\":1,\"30769549\":1,"
		"\"39903169\":1,\"6468501\":6,\"67108864\":1,\"5931641\":1,\"15384774\":0,\"56431603\":0,\"61539099\":1,\"4573920\":6,\"123078199\":0,\"159612677\":0,\"7053950\":2,\"134217728\":1,\"2286960\":1,\"18295683\":1,\"12937002\":2,\"103496016\":1,\"14107900\":0,\"11863283\":3,\"33554432\":2,\"2493948\":2,\"225726412\":0,\"23726566\":2,\"36591367\":0,\"21757357\":2,\"43514714\":4,\"7692387\":3,\"87029429\":0,\"268435456\":0,\"3234250\":0,\"4194304\":0,\"51748008\":0,\"246156398\":1,\"112863206\":0,\""
		"206992033\":0,\"16777216\":1,\"47453132\":1,\"8388608\":3,\"2719669\":1,\"19951584\":0,\"146365470\":0,\"174058858\":0,\"5439339\":3,\"2965820\":2,\"3526975\":3,\"79806338\":0,\"94906265\":0,\"10878678\":3,\"9975792\":4,\"189812531\":0,\"9147841\":1,\"3846193\":0,\"28215801\":1,\"73182735\":1},\"sum\":1624982988},\"extensions.timing.content_script_injection\":{\"values\":{\"961548\":1,\"1048576\":0},\"sum\":1000000},\"wr.framebuild_time\":{\"values\":{\"3234250\":0,\"262144\":60,\"14107900\":0,\""
		"10878678\":0,\"25874004\":0,\"77935\":0,\"571740\":22,\"2719669\":0,\"155871\":21,\"339958\":63,\"47453132\":0,\"142935\":30,\"131072\":13,\"220435\":35,\"2286960\":2,\"524288\":28,\"285870\":59,\"3526975\":0,\"1359834\":1,\"18295683\":1,\"2965820\":0,\"30769549\":0,\"4194304\":0,\"2493948\":2,\"741455\":10,\"23726566\":1,\"1923096\":2,\"881743\":1,\"65536\":1,\"120193\":4,\"240387\":35,\"2097152\":0,\"5439339\":0,\"480774\":34,\"1763487\":0,\"84989\":1,\"3846193\":2,\"311743\":59,\"11863283\":1,"
		"\"43514714\":1,\"7053950\":0,\"1048576\":7,\"110217\":3,\"9147841\":0,\"33554432\":0,\"808562\":8,\"12937002\":0,\"101070\":2,\"961548\":7,\"1143480\":2,\"623487\":11,\"185363\":46,\"202140\":40,\"9975792\":0,\"21757357\":1,\"92681\":2,\"15384774\":0,\"19951584\":1,\"169979\":43,\"4573920\":1,\"4987896\":0,\"36591367\":1,\"16777216\":1,\"8388608\":0,\"71467\":1,\"370727\":58,\"404281\":51,\"7692387\":0,\"1246974\":5,\"28215801\":0,\"5931641\":0,\"1617125\":1,\"440871\":41,\"679917\":11,\"39903169"
		"\":0,\"1482910\":2,\"6468501\":0},\"sum\":524904400},\"extensions.timing.extension_startup\":{\"values\":{\"1805811301\":0,\"1170923761\":0,\"1276901416\":0,\"902905650\":0,\"759250124\":6,\"984625593\":0,\"2553802833\":2,\"2784941737\":0,\"1969251187\":0,\"2147483648\":0,\"2341847523\":3,\"1392470868\":0,\"1518500249\":0,\"827968132\":0,\"1655936264\":0,\"1073741824\":0},\"sum\":17609282400},\"networking.dns_renewal_time_for_ttl\":{\"values\":{\"19951584\":2,\"43514714\":2,\"21757357\":2,\""
		"2965820\":15,\"8388608\":1,\"56431603\":0,\"1617125\":1,\"1923096\":2,\"94906265\":0,\"2286960\":2,\"7053950\":5,\"39903169\":1,\"33554432\":2,\"3526975\":4,\"67108864\":1,\"87029429\":1,\"14107900\":5,\"73182735\":0,\"7692387\":6,\"1763487\":5,\"12937002\":1,\"112863206\":0,\"2719669\":15,\"4194304\":6,\"9975792\":5,\"5439339\":3,\"16777216\":4,\"61539099\":0,\"4573920\":6,\"5931641\":3,\"25874004\":2,\"51748008\":3,\"3234250\":18,\"3846193\":12,\"9147841\":1,\"2097152\":4,\"28215801\":3,\""
		"103496016\":1,\"10878678\":5,\"18295683\":2,\"4987896\":6,\"30769549\":2,\"11863283\":3,\"15384774\":4,\"79806338\":1,\"6468501\":7,\"23726566\":0,\"47453132\":4,\"36591367\":0,\"2493948\":7},\"sum\":2139947165},\"wr.gpu_wait_time\":{\"values\":{\"17866\":20,\"35733\":2,\"30048\":3,\"16384\":25,\"38967\":1,\"32768\":2,\"60096\":0,\"8192\":45,\"9741\":51,\"21247\":15,\"110217\":0,\"19483\":19,\"2655\":2,\"6316\":37,\"84989\":1,\"65536\":0,\"55108\":1,\"4466\":34,\"25267\":18,\"8933\":42,\"23170\""
		":25,\"101070\":0,\"11585\":40,\"50535\":0,\"3756\":25,\"3444\":20,\"2435\":2,\"92681\":1,\"5311\":33,\"77935\":1,\"10623\":49,\"131072\":0,\"4096\":34,\"2048\":1,\"71467\":0,\"13777\":37,\"2233\":4,\"4870\":56,\"15024\":19,\"12633\":37,\"3158\":13,\"120193\":1,\"46340\":0,\"27554\":6,\"1878\":2,\"42494\":2,\"6888\":24,\"7512\":50,\"2896\":8,\"5792\":33},\"sum\":9277300},\"glean.validation.shutdown_wait\":{\"values\":{\"1359834\":0,\"1246974\":1},\"sum\":1266900},\""
		"networking.http_content_onstop_delay\":{\"values\":{\"28215801\":0,\"3526975\":4,\"2965820\":1,\"9975792\":2,\"189812531\":0,\"2097152\":3,\"112863206\":0,\"206992033\":1,\"103496016\":0,\"5439339\":2,\"159612677\":0,\"47453132\":1,\"73182735\":0,\"225726412\":0,\"43514714\":1,\"2719669\":0,\"11863283\":0,\"12937002\":1,\"3846193\":3,\"451452825\":0,\"174058858\":0,\"8388608\":1,\"1617125\":3,\"25874004\":2,\"39903169\":4,\"10878678\":2,\"134217728\":0,\"21757357\":0,\"19951584\":0,\"268435456\":0"
		",\"94906265\":0,\"585461880\":1,\"67108864\":1,\"2493948\":1,\"1143480\":1,\"2286960\":2,\"146365470\":0,\"30769549\":0,\"638450708\":1,\"18295683\":1,\"9147841\":1,\"413984066\":0,\"16777216\":0,\"1246974\":0,\"4194304\":1,\"7692387\":1,\"246156398\":0,\"33554432\":1,\"14107900\":0,\"1923096\":1,\"1359834\":2,\"36591367\":0,\"1763487\":0,\"1482910\":4,\"379625062\":2,\"348117717\":0,\"696235434\":0,\"5931641\":1,\"536870912\":0,\"4987896\":1,\"61539099\":0,\"319225354\":0,\"51748008\":1,\""
		"56431603\":0,\"15384774\":1,\"492312796\":1,\"4573920\":2,\"1048576\":3,\"6468501\":1,\"87029429\":0,\"23726566\":0,\"7053950\":1,\"79806338\":1,\"961548\":50,\"292730940\":0,\"123078199\":0,\"3234250\":1},\"sum\":3656939082},\"perf.largest_contentful_paint_from_response_start\":{\"values\":{\"9367390095\":1,\"10215211334\":0},\"sum\":9930097099},\"search.service.startup_time\":{\"values\":{\"379625062\":0,\"348117717\":1},\"sum\":349360600},\"wr.time_to_render_start\":{\"values\":{\"2965820\":0,"
		"\"10623\":0,\"1579\":0,\"131072\":2,\"2493948\":1,\"440871\":63,\"2655\":0,\"524288\":92,\"1448\":0,\"47453132\":0,\"21247\":0,\"1327\":0,\"71467\":0,\"808562\":19,\"262144\":10,\"38967\":0,\"7053950\":1,\"17866\":0,\"6468501\":0,\"8388608\":1,\"30769549\":0,\"14107900\":0,\"2896\":0,\"16384\":0,\"12633\":0,\"9975792\":0,\"142935\":2,\"1878\":0,\"25874004\":0,\"50535\":0,\"101070\":1,\"7692387\":1,\"6888\":0,\"404281\":78,\"939\":4,\"6316\":0,\"4870\":0,\"1024\":0,\"220435\":10,\"120193\":4,\""
		"2286960\":1,\"169979\":1,\"679917\":35,\"155871\":1,\"5439339\":0,\"5931641\":0,\"881743\":14,\"8192\":0,\"1722\":0,\"46340\":0,\"2719669\":2,\"480774\":90,\"92681\":0,\"5311\":0,\"370727\":60,\"571740\":69,\"3846193\":0,\"36591367\":1,\"311743\":53,\"240387\":9,\"3444\":0,\"2435\":0,\"10878678\":1,\"39903169\":0,\"16777216\":1,\"185363\":7,\"1763487\":1,\"1359834\":4,\"5792\":0,\"3756\":0,\"43514714\":1,\"2048\":0,\"1116\":0,\"23726566\":1,\"1048576\":5,\"623487\":49,\"27554\":0,\"25267\":0,\""
		"741455\":25,\"19483\":0,\"13777\":0,\"4096\":0,\"28215801\":0,\"9741\":0,\"8933\":0,\"60096\":0,\"77935\":0,\"7512\":0,\"32768\":0,\"19951584\":1,\"3158\":0,\"3526975\":0,\"3234250\":1,\"4194304\":2,\"1923096\":1,\"2097152\":1,\"15384774\":0,\"1482910\":4,\"55108\":1,\"4466\":0,\"65536\":1,\"9147841\":0,\"110217\":2,\"1246974\":7,\"42494\":0,\"11585\":0,\"33554432\":0,\"30048\":0,\"961548\":5,\"1143480\":7,\"285870\":31,\"84989\":0,\"21757357\":1,\"15024\":0,\"4573920\":2,\"4987896\":0,\"18295683"
		"\":1,\"339958\":59,\"11863283\":1,\"1617125\":4,\"23170\":0,\"202140\":3,\"12937002\":0,\"1217\":0,\"2233\":0,\"35733\":0},\"sum\":706419254},\"wr.rasterize_blobs_time\":{\"values\":{\"7053950\":0,\"2655\":0,\"5311\":0,\"92681\":2,\"11863283\":0,\"27554\":0,\"285870\":0,\"4194304\":0,\"65536\":5,\"202140\":0,\"6888\":20,\"55108\":1,\"15024\":0,\"3444\":0,\"1048576\":0,\"1482910\":0,\"7692387\":0,\"4466\":0,\"3234250\":0,\"16384\":0,\"679917\":0,\"30048\":0,\"8192\":0,\"3756\":91,\"2719669\":0,\""
		"1722\":0,\"38967\":1,\"1116\":0,\"6316\":0,\"155871\":0,\"11585\":2,\"4573920\":0,\"10878678\":0,\"131072\":0,\"9147841\":0,\"480774\":1,\"4870\":57,\"17866\":1,\"12633\":0,\"1579\":0,\"5931641\":0,\"2286960\":0,\"4987896\":0,\"35733\":0,\"1617125\":1,\"1359834\":0,\"440871\":0,\"339958\":2,\"9975792\":0,\"7512\":10,\"50535\":1,\"25267\":0,\"60096\":2,\"42494\":0,\"404281\":0,\"2493948\":0,\"5439339\":0,\"19483\":2,\"5792\":23,\"13777\":0,\"110217\":0,\"14107900\":0,\"32768\":0,\"169979\":1,\""
		"1878\":119,\"1923096\":0,\"1763487\":0,\"71467\":0,\"6468501\":0,\"262144\":0,\"808562\":0,\"2048\":0,\"1217\":0,\"961548\":1,\"741455\":0,\"2097152\":0,\"8933\":3,\"101070\":2,\"23170\":0,\"10623\":3,\"77935\":1,\"120193\":1,\"16777216\":0,\"3846193\":0,\"3158\":0,\"370727\":0,\"46340\":1,\"84989\":3,\"623487\":1,\"15384774\":1,\"240387\":2,\"142935\":0,\"939\":77,\"2896\":106,\"1143480\":0,\"185363\":0,\"2965820\":1,\"12937002\":0,\"524288\":1,\"1327\":0,\"220435\":1,\"8388608\":0,\"4096\":0,\""
		"881743\":0,\"2233\":0,\"9741\":2,\"1024\":0,\"1246974\":0,\"311743\":0,\"3526975\":0,\"21247\":0,\"571740\":2,\"1448\":0,\"2435\":0},\"sum\":30307000},\"wr.renderer_time\":{\"values\":{\"4573920\":7,\"7053950\":3,\"1246974\":11,\"404281\":4,\"440871\":6,\"2097152\":11,\"3526975\":7,\"262144\":10,\"240387\":8,\"961548\":13,\"285870\":4,\"12937002\":10,\"9975792\":30,\"1923096\":8,\"524288\":6,\"185363\":22,\"11863283\":8,\"1048576\":12,\"339958\":2,\"571740\":8,\"1617125\":9,\"1763487\":8,\"480774"
		"\":13,\"155871\":38,\"142935\":32,\"4987896\":13,\"741455\":17,\"18295683\":0,\"169979\":31,\"92681\":27,\"1482910\":8,\"71467\":7,\"370727\":1,\"9147841\":27,\"3234250\":10,\"2493948\":9,\"15384774\":3,\"1143480\":11,\"7692387\":3,\"10878678\":17,\"8388608\":28,\"5439339\":8,\"311743\":2,\"202140\":25,\"60096\":1,\"2965820\":4,\"623487\":8,\"101070\":35,\"77935\":13,\"3846193\":22,\"110217\":37,\"84989\":29,\"4194304\":4,\"1359834\":17,\"881743\":20,\"5931641\":4,\"679917\":14,\"14107900\":2,\""
		"131072\":21,\"120193\":34,\"2286960\":1,\"16777216\":2,\"65536\":2,\"808562\":9,\"6468501\":4,\"2719669\":4,\"220435\":15},\"sum\":2111302000},\"glean.upload.send_success\":{\"values\":{\"2784941737\":0,\"3037000499\":0,\"1392470868\":0,\"827968132\":0,\"1518500249\":0,\"1073741824\":0,\"2553802833\":0,\"2147483648\":0,\"1170923761\":0,\"902905650\":0,\"4683695047\":0,\"984625593\":0,\"696235434\":0,\"2341847523\":0,\"638450708\":0,\"1276901416\":0,\"3938502375\":0,\"585461880\":1,\"3611622602\":1"
		",\"759250124\":0,\"1805811301\":0,\"3311872529\":0,\"4294967296\":1,\"492312796\":1,\"536870912\":0,\"1655936264\":0,\"1969251187\":0},\"sum\":9415116000},\"wr.scenebuild_time\":{\"values\":{\"1217\":0,\"21247\":0,\"3846193\":0,\"13777\":0,\"6468501\":1,\"2655\":0,\"12937002\":0,\"311743\":0,\"202140\":0,\"808562\":0,\"881743\":0,\"3756\":0,\"1116\":0,\"131072\":0,\"262144\":0,\"2493948\":0,\"50535\":0,\"65536\":0,\"6316\":0,\"679917\":0,\"46340\":0,\"77935\":0,\"9975792\":0,\"3158\":0,\"2435\":0,"
		"\"16777216\":0,\"7053950\":0,\"1048576\":0,\"5311\":0,\"1359834\":0,\"285870\":0,\"8192\":0,\"1878\":0,\"15384774\":1,\"120193\":0,\"169979\":0,\"3526975\":0,\"1482910\":0,\"4194304\":0,\"38967\":0,\"1024\":0,\"92681\":0,\"240387\":0,\"404281\":0,\"110217\":0,\"2048\":0,\"23170\":0,\"1722\":0,\"4987896\":0,\"5439339\":0,\"1143480\":0,\"25267\":0,\"14107900\":0,\"8933\":0,\"1327\":0,\"440871\":0,\"35733\":0,\"9741\":0,\"370727\":0,\"939\":603,\"30048\":0,\"623487\":0,\"185363\":0,\"3234250\":0,\""
		"4870\":0,\"741455\":0,\"17866\":0,\"16384\":0,\"2719669\":0,\"11585\":0,\"1763487\":0,\"27554\":0,\"10878678\":0,\"480774\":0,\"15024\":0,\"1448\":0,\"1579\":0,\"339958\":0,\"2233\":0,\"2965820\":0,\"7692387\":0,\"84989\":0,\"19483\":0,\"1923096\":2,\"142935\":0,\"220435\":0,\"571740\":0,\"4573920\":0,\"1617125\":0,\"71467\":0,\"4466\":0,\"2097152\":0,\"12633\":0,\"55108\":0,\"3444\":0,\"9147841\":0,\"42494\":0,\"5792\":0,\"60096\":0,\"11863283\":0,\"524288\":0,\"6888\":0,\"7512\":0,\"4096\":0,\""
		"2286960\":0,\"8388608\":0,\"961548\":52,\"2896\":0,\"1246974\":0,\"10623\":0,\"101070\":0,\"155871\":0,\"5931641\":0,\"32768\":0},\"sum\":79603000},\"wr.sceneswap_time\":{\"values\":{\"55108\":16,\"36591367\":0,\"92681\":49,\"262144\":6,\"370727\":0,\"202140\":25,\"240387\":7,\"18295683\":0,\"1246974\":0,\"6468501\":0,\"339958\":1,\"4194304\":0,\"16777216\":0,\"14107900\":0,\"46340\":6,\"21757357\":1,\"4987896\":1,\"28215801\":0,\"39903169\":1,\"1763487\":0,\"42494\":2,\"43514714\":0,\"311743\":6,"
		"\"220435\":12,\"120193\":51,\"679917\":1,\"524288\":0,\"9147841\":0,\"101070\":53,\"285870\":2,\"8388608\":0,\"1359834\":3,\"71467\":43,\"1923096\":0,\"440871\":0,\"23726566\":0,\"60096\":21,\"3526975\":0,\"623487\":3,\"741455\":0,\"77935\":51,\"1482910\":0,\"3846193\":0,\"33554432\":0,\"169979\":25,\"961548\":0,\"881743\":0,\"12937002\":0,\"4573920\":0,\"1143480\":2,\"10878678\":0,\"2097152\":0,\"50535\":6,\"1617125\":0,\"2286960\":0,\"15384774\":0,\"2493948\":0,\"84989\":39,\"1048576\":1,\""
		"142935\":37,\"7053950\":1,\"571740\":0,\"2965820\":0,\"110217\":54,\"11863283\":0,\"32768\":3,\"65536\":41,\"404281\":2,\"131072\":36,\"38967\":2,\"19951584\":0,\"3234250\":1,\"7692387\":0,\"25874004\":0,\"9975792\":0,\"5439339\":0,\"35733\":2,\"30769549\":0,\"808562\":0,\"5931641\":0,\"185363\":26,\"155871\":18,\"480774\":1,\"2719669\":1},\"sum\":173519100},\"wr.renderer_time_no_sc\":{\"values\":{\"623487\":8,\"4194304\":4,\"1246974\":11,\"285870\":4,\"1617125\":9,\"77935\":13,\"92681\":27,\""
		"3526975\":7,\"2286960\":1,\"185363\":22,\"404281\":4,\"9975792\":30,\"169979\":31,\"84989\":29,\"18295683\":0,\"65536\":2,\"11863283\":6,\"440871\":6,\"101070\":35,\"120193\":34,\"4573920\":6,\"2493948\":9,\"220435\":15,\"262144\":10,\"60096\":1,\"2719669\":4,\"16777216\":2,\"10878678\":17,\"4987896\":12,\"524288\":6,\"881743\":20,\"142935\":32,\"6468501\":4,\"240387\":8,\"1359834\":17,\"15384774\":2,\"8388608\":27,\"1143480\":11,\"339958\":2,\"480774\":13,\"808562\":9,\"2965820\":4,\"1482910\":8,"
		"\"5439339\":8,\"5931641\":4,\"9147841\":27,\"7692387\":3,\"370727\":1,\"71467\":7,\"311743\":2,\"14107900\":2,\"12937002\":10,\"1048576\":12,\"155871\":38,\"131072\":21,\"202140\":25,\"571740\":8,\"2097152\":11,\"1923096\":8,\"7053950\":3,\"3846193\":22,\"110217\":37,\"3234250\":10,\"1763487\":8,\"741455\":16,\"961548\":13,\"679917\":14},\"sum\":2051303000},\"wr.time_to_frame_build\":{\"values\":{\"120193\":71,\"524288\":0,\"1763487\":0,\"77935\":48,\"30048\":3,\"4987896\":0,\"220435\":7,\""
		"5439339\":0,\"240387\":2,\"27554\":1,\"42494\":12,\"1246974\":1,\"142935\":53,\"35733\":11,\"4194304\":0,\"4573920\":0,\"23170\":0,\"404281\":1,\"1482910\":0,\"101070\":75,\"679917\":0,\"71467\":34,\"32768\":10,\"7053950\":0,\"808562\":0,\"38967\":4,\"571740\":0,\"2286960\":0,\"60096\":33,\"623487\":0,\"21247\":1,\"84989\":50,\"1359834\":0,\"3526975\":0,\"262144\":2,\"1143480\":1,\"2965820\":0,\"50535\":20,\"92681\":67,\"3846193\":0,\"2719669\":0,\"311743\":3,\"202140\":14,\"961548\":0,\"3234250\""
		":0,\"370727\":2,\"131072\":54,\"285870\":0,\"110217\":76,\"25267\":3,\"741455\":1,\"1923096\":1,\"185363\":25,\"2097152\":0,\"2493948\":0,\"1617125\":0,\"440871\":1,\"55108\":29,\"155871\":37,\"65536\":30,\"480774\":1,\"1048576\":0,\"881743\":0,\"5931641\":0,\"6468501\":1,\"46340\":21,\"169979\":26,\"339958\":3},\"sum\":105402700},\"networking.http_content_ondatafinished_to_onstop_delay\":{\"values\":{\"1617125\":0,\"7053950\":0,\"12937002\":0,\"14107900\":0,\"5439339\":1,\"1482910\":0,\"961548\""
		":8,\"3526975\":0,\"2286960\":0,\"2097152\":1,\"4987896\":0,\"21757357\":0,\"2965820\":0,\"1923096\":0,\"5931641\":0,\"1359834\":0,\"7692387\":0,\"1048576\":0,\"9975792\":0,\"4573920\":0,\"8388608\":0,\"3234250\":0,\"1763487\":0,\"3846193\":0,\"19951584\":0,\"25874004\":2,\"10878678\":0,\"2719669\":1,\"4194304\":0,\"28215801\":0,\"18295683\":0,\"23726566\":0,\"2493948\":0,\"15384774\":0,\"1246974\":0,\"16777216\":0,\"6468501\":0,\"1143480\":0,\"11863283\":0,\"9147841\":0},\"sum\":71937699},\""
		"wr.rasterize_glyphs_time\":{\"values\":{\"77935\":1,\"524288\":1,\"1143480\":0,\"2896\":28,\"1878\":47,\"2965820\":0,\"2048\":72,\"1048576\":0,\"71467\":0,\"17866\":9,\"55108\":3,\"84989\":0,\"370727\":1,\"46340\":0,\"1763487\":0,\"25267\":5,\"131072\":1,\"155871\":0,\"110217\":1,\"10623\":21,\"3158\":26,\"2435\":51,\"8933\":17,\"6316\":10,\"5792\":30,\"2286960\":0,\"1579\":6,\"27554\":6,\"32768\":4,\"11585\":16,\"65536\":3,\"185363\":2,\"8192\":18,\"480774\":0,\"19483\":30,\"4096\":44,\"2493948\""
		":1,\"1246974\":0,\"30048\":6,\"9741\":17,\"42494\":2,\"7512\":11,\"15024\":14,\"404281\":1,\"3444\":23,\"1482910\":0,\"5311\":12,\"2719669\":1,\"1722\":8,\"961548\":1,\"262144\":1,\"220435\":2,\"881743\":0,\"4466\":32,\"23170\":24,\"2233\":54,\"142935\":1,\"2097152\":0,\"3756\":23,\"440871\":1,\"4870\":33,\"21247\":15,\"623487\":1,\"240387\":1,\"1617125\":0,\"679917\":2,\"202140\":0,\"169979\":0,\"571740\":1,\"808562\":2,\"285870\":0,\"311743\":0,\"12633\":16,\"16384\":14,\"13777\":20,\"741455\":1"
		",\"1923096\":0,\"1359834\":0,\"35733\":2,\"60096\":0,\"50535\":3,\"6888\":8,\"2655\":24,\"38967\":2,\"120193\":0,\"339958\":1,\"92681\":1,\"101070\":0},\"sum\":22598800},\"extensions.timing.background_page_load\":{\"values\":{\"1655936264\":0,\"1518500249\":2,\"1276901416\":1,\"1392470868\":2},\"sum\":7440604700},\"glean.upload.send_failure\":{\"values\":{\"79806338\":1,\"87029429\":0},\"sum\":80316800},\"perf.largest_contentful_paint\":{\"values\":{\"12148001999\":0,\"11139766950\":1},\"sum\""
		":11657379999},\"networking.dns_failed_lookup_time\":{\"values\":{\"5931641\":1,\"6468501\":2,\"10878678\":0,\"16777216\":0,\"9147841\":0,\"7053950\":0,\"2493948\":2,\"8388608\":2,\"9975792\":0,\"3234250\":2,\"4987896\":1,\"12937002\":0,\"3526975\":3,\"4573920\":1,\"14107900\":1,\"11863283\":0,\"4194304\":1,\"3846193\":1,\"2965820\":5,\"15384774\":1,\"2719669\":3,\"7692387\":2,\"5439339\":5},\"sum\":176853888},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"1763487\":1,\"1923096\":0},"
		"\"sum\":1785200},\"networking.dns_renewal_time\":{\"values\":{\"2965820\":8,\"2493948\":9,\"9975792\":2,\"4194304\":4,\"23726566\":0,\"25874004\":0,\"19951584\":0,\"9147841\":0,\"2286960\":4,\"12937002\":2,\"4573920\":9,\"5931641\":6,\"7053950\":2,\"6468501\":3,\"51748008\":1,\"36591367\":0,\"21757357\":0,\"43514714\":0,\"7692387\":0,\"30769549\":0,\"11863283\":0,\"4987896\":5,\"39903169\":0,\"3526975\":8,\"14107900\":0,\"8388608\":2,\"56431603\":0,\"18295683\":0,\"16777216\":1,\"33554432\":0,\""
		"2097152\":4,\"3846193\":7,\"28215801\":0,\"5439339\":4,\"15384774\":0,\"10878678\":1,\"2719669\":14,\"47453132\":0,\"3234250\":12},\"sum\":531661885},\"networking.http_content_ondatafinished_delay\":{\"values\":{\"4573920\":0,\"2493948\":0,\"3846193\":0,\"10878678\":1,\"2097152\":0,\"9147841\":0,\"7053950\":0,\"2719669\":0,\"1143480\":0,\"961548\":12,\"3234250\":0,\"6468501\":0,\"1763487\":0,\"7692387\":0,\"3526975\":0,\"2965820\":0,\"5931641\":0,\"1923096\":0,\"5439339\":0,\"1617125\":0,\""
		"1246974\":0,\"8388608\":0,\"1048576\":0,\"9975792\":0,\"2286960\":0,\"4987896\":0,\"1482910\":0,\"4194304\":0,\"11863283\":0,\"1359834\":0},\"sum\":23304400},\"fog.ipc.flush_durations\":{\"values\":{\"25874004\":0,\"43514714\":0,\"39903169\":1,\"23726566\":1,\"30769549\":0,\"36591367\":0,\"33554432\":0,\"28215801\":0},\"sum\":66437400},\"wr.texture_cache_update_time\":{\"values\":{\"17866\":0,\"13777\":3,\"4096\":0,\"110217\":2,\"38967\":3,\"50535\":4,\"3756\":4,\"4466\":0,\"46340\":3,\"7512\":0,"
		"\"6316\":0,\"1327\":0,\"4870\":1,\"11585\":2,\"71467\":0,\"32768\":4,\"1116\":0,\"1579\":0,\"42494\":3,\"9741\":1,\"2655\":0,\"6888\":1,\"1878\":233,\"30048\":4,\"220435\":0,\"2048\":0,\"1217\":0,\"101070\":3,\"35733\":1,\"1722\":0,\"8933\":0,\"92681\":1,\"60096\":2,\"169979\":0,\"8192\":0,\"311743\":1,\"2896\":33,\"202140\":0,\"12633\":0,\"185363\":0,\"25267\":3,\"65536\":0,\"16384\":0,\"77935\":2,\"2435\":0,\"23170\":1,\"5792\":0,\"27554\":2,\"1448\":0,\"120193\":2,\"939\":500,\"131072\":1,\""
		"3158\":0,\"155871\":0,\"240387\":2,\"285870\":0,\"15024\":0,\"84989\":0,\"21247\":4,\"142935\":3,\"19483\":8,\"5311\":0,\"55108\":2,\"3444\":0,\"2233\":0,\"339958\":0,\"10623\":0,\"262144\":0,\"1024\":0},\"sum\":5217000},\"networking.http_content_onstart_delay\":{\"values\":{\"206992033\":1,\"21757357\":0,\"5931641\":0,\"2493948\":0,\"7053950\":0,\"268435456\":0,\"79806338\":0,\"292730940\":0,\"16777216\":1,\"536870912\":0,\"492312796\":1,\"4573920\":1,\"10878678\":1,\"1359834\":1,\"174058858\":0,"
		"\"638450708\":1,\"39903169\":1,\"19951584\":0,\"61539099\":0,\"5439339\":0,\"2719669\":0,\"14107900\":1,\"30769549\":0,\"47453132\":1,\"8388608\":1,\"2286960\":0,\"1143480\":2,\"28215801\":0,\"319225354\":0,\"6468501\":1,\"9975792\":1,\"379625062\":1,\"413984066\":0,\"18295683\":1,\"33554432\":1,\"51748008\":0,\"189812531\":0,\"103496016\":0,\"94906265\":0,\"585461880\":1,\"3234250\":3,\"1923096\":0,\"961548\":71,\"246156398\":0,\"15384774\":0,\"9147841\":2,\"1048576\":3,\"696235434\":0,\"4194304"
		"\":1,\"1246974\":3,\"1482910\":0,\"56431603\":0,\"225726412\":0,\"12937002\":0,\"451452825\":1,\"25874004\":0,\"11863283\":0,\"36591367\":2,\"3526975\":0,\"112863206\":0,\"43514714\":1,\"3846193\":2,\"1617125\":1,\"87029429\":0,\"348117717\":0,\"123078199\":0,\"2965820\":1,\"159612677\":0,\"134217728\":0,\"1763487\":0,\"73182735\":1,\"7692387\":1,\"67108864\":1,\"23726566\":0,\"2097152\":1,\"146365470\":0,\"4987896\":2},\"sum\":3507568192},\"paint.build_displaylist_time\":{\"values\":{\"4194304\""
		":0,\"15024\":6,\"25267\":1,\"50535\":0,\"623487\":62,\"1246974\":15,\"4987896\":1,\"155871\":1,\"4573920\":0,\"16384\":1,\"46340\":0,\"131072\":0,\"142935\":4,\"27554\":2,\"285870\":16,\"1359834\":8,\"3846193\":2,\"480774\":59,\"202140\":4,\"1617125\":4,\"1143480\":20,\"3526975\":0,\"240387\":8,\"1763487\":6,\"808562\":38,\"1482910\":7,\"65536\":0,\"524288\":55,\"23170\":0,\"2719669\":1,\"60096\":1,\"440871\":58,\"1048576\":23,\"3234250\":0,\"404281\":50,\"571740\":67,\"370727\":47,\"55108\":0,\""
		"21247\":0,\"13777\":6,\"30048\":1,\"961548\":30,\"5439339\":0,\"339958\":38,\"311743\":28,\"2965820\":2,\"19483\":1,\"741455\":53,\"71467\":1,\"2493948\":2,\"110217\":2,\"1923096\":8,\"84989\":2,\"2097152\":5,\"169979\":3,\"262144\":11,\"120193\":1,\"101070\":2,\"220435\":10,\"185363\":10,\"2286960\":3,\"77935\":0,\"679917\":56,\"32768\":0,\"38967\":1,\"42494\":1,\"881743\":34,\"17866\":2,\"35733\":0,\"92681\":2},\"sum\":589826600}},\"datetime\":{\"glean.validation.first_run_hour\":\"2023-02-13T17"
		"+05:30\",\"blocklist.mlbf_generation_time\":\"2023-07-25T00:05:12.145+05:30\",\"blocklist.mlbf_stash_time_newest\":\"2024-02-15T18:05:04.358+05:30\",\"blocklist.last_modified_rs_addons_mblf\":\"2024-02-15T18:06:01.099+05:30\",\"background_update.time_last_update_scheduled\":\"2024-02-23+05:30\",\"blocklist.mlbf_stash_time_oldest\":\"2024-02-09T18:05:04.424+05:30\"},\"timespan\":{\"fog.initialization\":{\"value\":164600,\"time_unit\":\"nanosecond\"}}}}", 
		LAST);

	web_custom_request("r3.o.lencr.org_12", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x03\nw\\x01o\\xBA\\x95m]P\\xD3\\xEA5\\xE6W\\xF1p\\x17", 
		LAST);

	web_custom_request("e1.o.lencr.org_5", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xEC\\xDD\\xC6\\x05|\\xBF\\x19\\x00\\x9DH\\xD9\\xA1\\xD9\\xE0\\xEF\\xE3J", 
		LAST);

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("produce_batch_2", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678870462},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"\",\"path\":\"/\",\"search\":\"\",\"title\":\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\",\"url\":\"https://www.tastynibbles.in/\",\"properties\":{},\"eventId\":\"sh-d53284ec-6158-448E-F158-B4592DDFE0AF\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\""
		":\"home\",\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visitToken\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"microSessionId\":\"d5328623-F7B2-4C2F-6066-16B33E5E3300\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708678870462}"
		"}]}", 
		LAST);

	web_custom_request("produce_batch_3", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678870464},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d53284ec-6158-448E-F158-B4592DDFE0AF\",\"referrer\":\"\",\"canonical_url\":\"https://www.tastynibbles.in/\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708678870464,\"event_source_url\":\"https://www.tastynibbles.in/\",\"unique_token\":\""
		"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"page_id\":\"d5328623-F7B2-4C2F-6066-16B33E5E3300\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"deprecated_visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\""
		",\"session_id\":\"sh-d532864c-B6AA-4838-DF62-1835DAAB775B\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708678870464}}]}", 
		LAST);

	web_custom_request("produce_batch_4", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678870802},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708678870285}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708678870286}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\""
		"shop_prefs\":\"unknown\",\"event_id\":\"sh-d53284ec-6158-448E-F158-B4592DDFE0AF\"},\"metadata\":{\"event_created_at_ms\":1708678870289}}]}", 
		LAST);

	web_custom_request("produce_batch_5", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678870465},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708678870443}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id"
		"\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d53284ec-6158-448E-F158-B4592DDFE0AF\"},\"metadata\":{\"event_created_at_ms\":1708678870463}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\""
		"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"page\\\":\\\"/\\\",\\\"title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708678870463}},{\""
		"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\",\\\"MC-Y41CDBPZ5C\\\"],\\\"page_path\\\":\\\"/\\\",\\\""
		"page_title\\\":\\\"Tasty Nibbles - Ready to Eat, Canned Tuna, Fish Curries and more\\\",\\\"page_location\\\":\\\"https://www.tastynibbles.in/\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708678870463}}]}", 
		LAST);

	web_custom_request("e1.o.lencr.org_6", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xEC\\xDD\\xC6\\x05|\\xBF\\x19\\x00\\x9DH\\xD9\\xA1\\xD9\\xE0\\xEF\\xE3J", 
		LAST);

	web_custom_request("d9299f82-4290-44c9-a25a-674864e430a9", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/d9299f82-4290-44c9-a25a-674864e430a9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":3,\"start_time\":\"2024-02-23T11:11:10.000+05:30\",\"end_time\":\"2024-02-23T14:30:08.548+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"app_display_version\":\"123.0\",\"os\":\"Windows\",\"app_channel\":\"release\",\"app_build\":\"20240213221259\",\"architecture\":\"x86_64\",\"locale\":\"en-GB\",\"os_version\":\"10.0\",\"windows_build_number\":19045,\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\",\"build_date\":\""
		"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2023-02-13+05:30\"},\"metrics\":{\"quantity\":{\"topsites.rows\":1},\"string_list\":{\"newtab.blocked_sponsors\":[]},\"boolean\":{\"pocket.is_signed_in\":false,\"pocket.sponsored_stories_enabled\":true,\"topsites.enabled\":true,\"pocket.enabled\":true,\"topsites.sponsored_enabled\":true,\"newtab.search.enabled\":true},\"string\":{\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-GB\",\"newtab.newtab_category\":\"enabled\"}}}", 
		LAST);

	web_custom_request("produce_batch_6", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678871472},\"events\":[{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version"
		"\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d53284ec-6158-448E-F158-B4592DDFE0AF\"},\"metadata\":{\"event_created_at_ms\":1708678870958}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\""
		"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":670,\"start_time\":4061,\"session_id\":\"7b91a27f-fa77-4634-8958-c186b8d6f4cb\"},\"metadata\":{\"event_created_at_ms\":1708678870959}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d53284ec-6158-448E-F158-B4592DDFE0AF\"},\"metadata\":{\""
		"event_created_at_ms\":1708678871415}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\""
		"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":1128,\"start_time\":4061,\"session_id\":\"7b91a27f-fa77-4634-8958-c186b8d6f4cb\"},\"metadata\":{\"event_created_at_ms\":1708678871416}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\""
		"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d53284ec-6158-448E-F158-B4592DDFE0AF\"},\"metadata\":{\"event_created_at_ms\":1708678871456}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6"
		"\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\""
		"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":1171,\"start_time\":4061,\"session_id\":\"7b91a27f-fa77-4634-8958-c186b8d6f4cb\"},\"metadata\":{\"event_created_at_ms\":1708678871459}}]}", 
		LAST);

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("e4b7b1b5-159a-4109-9ab0-b67294f6a956", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/e4b7b1b5-159a-4109-9ab0-b67294f6a956", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":2,\"start_time\":\"2024-02-23T11:11:10.000+05:30\",\"end_time\":\"2024-02-23T14:30:08.604+05:30\",\"reason\":\"active\",\"experiments\":{\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"first_run_date\":\"2023-02-13+05:30\""
		",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"locale\":\"en-GB\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"app_display_version\":\"123.0\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_build\":\"20240213221259\",\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\",\"windows_build_number\":19045},\"metrics\":{\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1,\"metrics\":1,\"newtab\":1,\"use-counters\":1}},\"uuid\":{\""
		"legacy.telemetry.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"},\"counter\":{\"browser.engagement.uri_count\":1,\"browser.engagement.active_ticks\":10},\"datetime\":{\"glean.validation.first_run_hour\":\"2023-02-13T17+05:30\"}}}", 
		LAST);

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708678872.1.0.1708678872.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga=GA1.1.1009072370.1708678872; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_gcl_au=1.1.127833962.1708678873; DOMAIN=www.tastynibbles.in");

	web_url("cart", 
		"URL=https://www.tastynibbles.in/cart?t=1708678872707&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("413fadae-5a77-4b62-b2aa-30fb013f645a", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/413fadae-5a77-4b62-b2aa-30fb013f645a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":1,\"start_time\":\"2024-02-23T11:12:31.000+05:30\",\"end_time\":\"2024-02-23T14:30:23.544+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"client_id\":\""
		"b15c2122-a8ac-496f-a186-095bffc440f6\",\"os_version\":\"10.0\",\"app_display_version\":\"123.0\",\"architecture\":\"x86_64\",\"app_build\":\"20240213221259\",\"os\":\"Windows\",\"app_channel\":\"release\",\"locale\":\"en-GB\",\"first_run_date\":\"2023-02-13+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045},\"metrics\":{\"counter\":{\"use.counter.css.doc.css_order\":2,\"use.counter.css.page.css_border_image\":1,\"use.counter.css.doc.css_page_break_inside\":1,\""
		"use.counter.css.doc.css_border_right\":2,\"use.counter.css.doc.css_webkit_transition_duration\":1,\"use.counter.css.page.css_webkit_box_shadow\":1,\"use.counter.css.page.webkit_tap_highlight_color\":1,\"use.counter.css.doc.css_clear\":2,\"use.counter.css.doc.css_stroke_linecap\":1,\"use.counter.css.page.css_cursor\":1,\"use.counter.css.doc.webkit_margin_after\":1,\"use.counter.css.page.css_background_clip\":1,\"use.counter.css.page.css_fill_rule\":1,\"use.counter.css.doc.css_border\":2,\""
		"use.counter.doc.window_chrome\":1,\"use.counter.dedicated_workers_destroyed\":2,\"use.counter.css.doc.css_scrollbar_color\":1,\"use.counter.css.doc.css_webkit_justify_content\":1,\"use.counter.css.page.css_transition\":1,\"use.counter.css.doc.css_stroke_dasharray\":1,\"use.counter.css.page.css_border_top\":1,\"use.counter.css.page.css_margin\":1,\"use.counter.css.doc.css_overflow\":2,\"use.counter.css.page.css_overflow_x\":1,\"use.counter.css.doc.css_webkit_box_shadow\":2,\""
		"use.counter.css.page.css_webkit_border_top_right_radius\":1,\"use.counter.css.page.css_outline_style\":1,\"use.counter.css.doc.css_clip\":1,\"use.counter.css.doc.css_overflow_y\":2,\"use.counter.css.doc.css_webkit_animation\":2,\"use.counter.css.page.css_border_radius\":1,\"use.counter.css.page.css_overflow\":1,\"use.counter.css.page.css_transition_duration\":1,\"use.counter.css.doc.css_text_transform\":2,\"use.counter.css.doc.css_outline\":2,\"use.counter.css.page.css_webkit_box_align\":1,\""
		"use.counter.css.doc.css_webkit_box_direction\":1,\"use.counter.css.doc.css_opacity\":2,\"use.counter.css.doc.css_moz_user_select\":2,\"use.counter.css.page.css_text_transform\":1,\"use.counter.css.doc.css_moz_transition\":1,\"use.counter.css.doc.css_letter_spacing\":2,\"use.counter.css.page.css_visibility\":1,\"use.counter.doc.window_performancelongtasktiming\":1,\"use.counter.css.page.css_webkit_animation_duration\":1,\"use.counter.css.doc.css_background_repeat\":2,\""
		"use.counter.css.page.css_moz_transition\":1,\"use.counter.css.doc.widows\":1,\"use.counter.css.doc.css_backface_visibility\":1,\"use.counter.css.doc.css_font_size\":2,\"use.counter.css.page.css_background_image\":1,\"use.counter.css.page.css_text_underline_offset\":1,\"use.counter.css.page.css_webkit_justify_content\":1,\"use.counter.css.page.css_background_color\":1,\"use.counter.page.window_performancelongtasktiming\":1,\"use.counter.css.page.css_font_weight\":1,\""
		"use.counter.page.window_paymentrequest\":1,\"use.counter.css.doc.css_stroke_linejoin\":1,\"use.counter.css.page.css_moz_transform_origin\":1,\"use.counter.css.doc.css_text_decoration\":2,\"use.counter.css.page.css_min_width\":1,\"use.counter.css.page.css_stroke_linejoin\":1,\"use.counter.css.page.css_moz_appearance\":1,\"use.counter.css.doc.css_transform_style\":1,\"use.counter.css.doc.css_border_top_right_radius\":2,\"use.counter.css.page.css_pointer_events\":1,\""
		"use.counter.css.doc.css_animation_iteration_count\":1,\"use.counter.css.doc.css_mix_blend_mode\":2,\"use.counter.css.page.css_webkit_flex_direction\":1,\"use.counter.css.doc.css_background_position_y\":1,\"use.counter.css.page.css_webkit_appearance\":1,\"use.counter.css.page.css_webkit_flex_wrap\":1,\"use.counter.css.doc.css_flex_grow\":1,\"use.counter.css.doc.css_grid_column\":1,\"use.counter.css.doc.css_font_variant_numeric\":1,\"use.counter.css.doc.css_animation_name\":1,\""
		"use.counter.doc.window_touchlist\":1,\"use.counter.css.page.css_border_bottom_left_radius\":1,\"use.counter.css.page.css_break_inside\":1,\"use.counter.css.page.css_right\":1,\"use.counter.css.page.css_columns\":1,\"use.counter.css.page.css_font_family\":1,\"use.counter.css.doc.webkit_padding_start\":1,\"use.counter.doc.mixed_content_not_upgraded_image_failure\":1,\"use.counter.css.doc.css_flex_flow\":1,\"use.counter.css.doc.css_hyphens\":1,\"use.counter.css.doc.css_border_width\":2,\""
		"use.counter.css.doc.css_text_decoration_line\":2,\"use.counter.css.doc.css_font\":1,\"use.counter.css.page.css_border_bottom_color\":1,\"use.counter.css.doc.css_caret_color\":1,\"use.counter.css.doc.css_flex_basis\":2,\"use.counter.css.page.css_margin_left\":1,\"use.counter.css.doc.css_font_family\":2,\"use.counter.css.doc.css_background_position\":2,\"use.counter.css.doc.css_user_select\":2,\"use.counter.css.doc.css_flex_wrap\":2,\"use.counter.css.page.css_webkit_transition_duration\":1,\""
		"use.counter.css.doc.css_border_left\":2,\"use.counter.css.doc.css_will_change\":1,\"use.counter.css.page.css_justify_content\":1,\"use.counter.css.page.css_stroke_width\":1,\"use.counter.css.page.css_border_bottom\":1,\"use.counter.css.doc.css_text_overflow\":2,\"use.counter.css.doc.css_object_position\":1,\"use.counter.css.page.css_padding_inline_start\":1,\"use.counter.css.page.css_overflow_y\":1,\"use.counter.css.doc.css_webkit_text_size_adjust\":1,\"use.counter.css.doc.css_webkit_order\":1,\""
		"use.counter.css.page.css_table_layout\":1,\"use.counter.css.doc.css_word_break\":2,\"use.counter.css.doc.css_margin\":2,\"use.counter.css.doc.css_list_style\":2,\"use.counter.css.doc.css_border_bottom\":2,\"use.counter.css.doc.css_moz_transform\":1,\"use.counter.css.doc.css_webkit_transition_delay\":1,\"use.counter.css.doc.css_animation_duration\":2,\"use.counter.css.page.css_webkit_border_radius\":1,\"use.counter.css.page.css_list_style_type\":1,\"use.counter.css.doc.css_resize\":1,\""
		"use.counter.css.page.css_animation\":1,\"use.counter.css.doc.css_filter\":1,\"use.counter.css.page.css_flex_wrap\":1,\"use.counter.css.doc.css_background_size\":2,\"use.counter.css.page.css_clear\":1,\"use.counter.css.page.css_flex_flow\":1,\"use.counter.css.doc.css_webkit_flex_basis\":1,\"use.counter.css.page.orphans\":1,\"use.counter.css.doc.css_position\":2,\"use.counter.css.page.css_background_size\":1,\"use.counter.css.page.css_webkit_align_items\":1,\""
		"use.counter.css.doc.css_webkit_transition\":2,\"use.counter.css.doc.css_min_width\":2,\"use.counter.css.page.webkit_margin_before\":1,\"use.counter.css.page.css_content\":1,\"use.counter.css.doc.css_touch_action\":1,\"use.counter.css.doc.css_webkit_align_items\":1,\"use.counter.css.page.css_scrollbar_color\":1,\"use.counter.css.doc.css_padding_bottom\":2,\"use.counter.css.page.css_animation_fill_mode\":1,\"use.counter.css.page.css_webkit_flex_grow\":1,\"use.counter.css.page.css_border_right\":1,\""
		"use.counter.css.page.css_hyphens\":1,\"use.counter.css.doc.css_font_weight\":2,\"use.counter.css.page.css_line_height\":1,\"use.counter.css.page.css_background_attachment\":1,\"use.counter.css.page.css_webkit_transition_property\":1,\"use.counter.css.page.css_webkit_transform\":1,\"use.counter.css.page.css_transition_delay\":1,\"use.counter.css.page.css_gap\":1,\"use.counter.css.doc.css_animation_fill_mode\":1,\"use.counter.css.doc.css_margin_left\":2,\"use.counter.css.doc.css_justify_content\":2,"
		"\"use.counter.css.page.css_direction\":1,\"use.counter.css.page.css_webkit_align_self\":1,\"use.counter.css.page.css_webkit_animation\":1,\"use.counter.css.page.css_webkit_animation_iteration_count\":1,\"use.counter.css.page.css_border_top_left_radius\":1,\"use.counter.css.doc.css_webkit_box_flex\":1,\"use.counter.doc.domparser_parsefromstring\":1,\"use.counter.css.page.css_font_style\":1,\"use.counter.css.page.css_page_break_inside\":1,\"use.counter.css.page.css_moz_box_sizing\":1,\""
		"use.counter.css.doc.css_float\":2,\"use.counter.css.page.css_moz_transform\":1,\"use.counter.css.doc.css_background_image\":2,\"use.counter.css.page.css_webkit_animation_delay\":1,\"use.counter.css.page.css_padding_top\":1,\"use.counter.css.page.css_border_bottom_right_radius\":1,\"use.counter.css.page.css_webkit_box_pack\":1,\"use.counter.css.page.css_border_top_right_radius\":1,\"use.counter.css.page.css_position\":1,\"use.counter.css.page.css_order\":1,\""
		"use.counter.css.page.css_stroke_dashoffset\":1,\"use.counter.css.doc.webkit_column_gap\":1,\"use.counter.css.doc.css_webkit_animation_name\":1,\"use.counter.css.page.css_text_align\":1,\"use.counter.css.page.css_flex_direction\":1,\"use.counter.css.page.css_filter\":1,\"use.counter.css.page.css_webkit_backface_visibility\":1,\"use.counter.css.doc.css_translate\":1,\"use.counter.css.page.css_mix_blend_mode\":1,\"use.counter.css.doc.css_animation_delay\":2,\"use.counter.css.page.css_translate\":1,\""
		"use.counter.css.doc.css_transition_timing_function\":1,\"use.counter.css.page.webkit_font_feature_settings\":1,\"use.counter.css.doc.css_animation_timing_function\":1,\"use.counter.css.page.css_scroll_behavior\":1,\"use.counter.css.page.css_webkit_box_flex\":1,\"use.counter.css.page.css_webkit_flex_shrink\":1,\"use.counter.css.doc.css_transition_delay\":2,\"use.counter.css.doc.css_margin_top\":2,\"use.counter.css.page.css_background\":1,\"use.counter.css.doc.css_webkit_border_top_left_radius\":1,"
		"\"use.counter.css.doc.css_webkit_box_orient\":1,\"use.counter.css.doc.css_border_right_color\":1,\"use.counter.css.page.css_clip\":1,\"use.counter.css.doc.css_word_wrap\":2,\"use.counter.css.doc.css_webkit_flex_direction\":1,\"use.counter.css.doc.css_webkit_animation_direction\":1,\"use.counter.css.doc.css_vertical_align\":2,\"use.counter.css.page.css_transform_style\":1,\"use.counter.css.page.css_place_items\":1,\"use.counter.css.page.css_word_break\":1,\"use.counter.css.page.css_font\":1,\""
		"use.counter.css.doc.css_align_items\":2,\"use.counter.css.page.css_box_shadow\":1,\"use.counter.css.doc.css_margin_right\":2,\"use.counter.page.mixed_content_not_upgraded_image_failure\":1,\"use.counter.css.doc.css_overflow_x\":2,\"use.counter.css.page.css_will_change\":1,\"use.counter.css.page.css_webkit_box_direction\":1,\"use.counter.css.doc.css_column_gap\":2,\"use.counter.css.page.css_webkit_animation_fill_mode\":1,\"use.counter.css.page.css_border_width\":1,\""
		"use.counter.css.doc.css_border_bottom_left_radius\":1,\"use.counter.page.customelementregistry_define\":1,\"use.counter.css.doc.css_width\":2,\"use.counter.css.doc.css_animation_direction\":1,\"use.counter.css.page.css_left\":1,\"use.counter.css.page.css_object_position\":1,\"use.counter.css.doc.css_webkit_animation_fill_mode\":1,\"use.counter.css.doc.css_border_spacing\":1,\"use.counter.css.doc.css_scrollbar_width\":2,\"use.counter.css.page.css_top\":1,\"use.counter.css.doc.css_webkit_flex_wrap\""
		":1,\"use.counter.css.doc.css_text_indent\":2,\"use.counter.css.page.webkit_column_gap\":1,\"use.counter.css.page.webkit_margin_after\":1,\"use.counter.css.doc.css_webkit_border_top_right_radius\":1,\"use.counter.css.page.css_padding_left\":1,\"use.counter.css.page.css_text_overflow\":1,\"use.counter.css.page.css_webkit_animation_direction\":1,\"use.counter.css.doc.css_border_bottom_color\":2,\"use.counter.css.page.css_align_content\":1,\"use.counter.css.doc.css_webkit_transition_property\":1,\""
		"use.counter.css.page.css_vertical_align\":1,\"use.counter.css.doc.webkit_font_smoothing\":1,\"use.counter.css.page.css_text_indent\":1,\"use.counter.css.page.css_grid_template_columns\":1,\"use.counter.css.page.css_webkit_box_sizing\":1,\"use.counter.page.document_featurepolicy\":1,\"use.counter.css.page.css_stroke_linecap\":1,\"use.counter.css.page.css_border_style\":1,\"use.counter.css.page.css_animation_iteration_count\":1,\"use.counter.css.doc.css_webkit_flex_shrink\":1,\""
		"use.counter.css.doc.css_font_feature_settings\":2,\"use.counter.css.doc.css_border_collapse\":1,\"use.counter.css.doc.css_transition\":2,\"use.counter.css.doc.webkit_font_feature_settings\":1,\"use.counter.css.doc.css_border_top_color\":2,\"use.counter.css.doc.css_border_radius\":2,\"use.counter.css.page.css_webkit_box_orient\":1,\"use.counter.css.doc.css_transition_duration\":2,\"use.counter.page.window_touchlist\":1,\"use.counter.content_documents_destroyed\":8,\""
		"use.counter.css.page.webkit_font_smoothing\":1,\"use.counter.css.page.css_z_index\":1,\"use.counter.css.page.css_margin_bottom\":1,\"use.counter.css.doc.css_webkit_user_select\":2,\"use.counter.css.page.css_overflow_wrap\":1,\"use.counter.css.page.css_margin_block_start\":1,\"use.counter.css.page.css_backface_visibility\":1,\"use.counter.css.doc.css_z_index\":2,\"use.counter.css.doc.orphans\":1,\"use.counter.css.page.css_font_variant_numeric\":1,\"use.counter.css.doc.css_webkit_flex_grow\":1,\""
		"use.counter.css.page.css_padding\":1,\"use.counter.page.domparser_parsefromstring\":1,\"use.counter.css.doc.css_padding_right\":2,\"use.counter.css.doc.css_break_inside\":1,\"use.counter.css.page.css_webkit_text_size_adjust\":1,\"use.counter.css.doc.css_moz_box_sizing\":1,\"use.counter.css.doc.css_background\":2,\"use.counter.css.doc.css_margin_block_end\":1,\"use.counter.css.doc.css_webkit_box_align\":2,\"use.counter.css.page.css_margin_block_end\":1,\"use.counter.css.doc.css_right\":2,\""
		"use.counter.css.doc.css_padding_left\":2,\"use.counter.css.page.css_border_top_color\":1,\"use.counter.css.doc.css_display\":2,\"use.counter.css.page.css_animation_name\":1,\"use.counter.css.doc.css_margin_bottom\":2,\"use.counter.top_level_content_documents_destroyed\":1,\"use.counter.css.page.css_text_decoration_line\":1,\"use.counter.css.doc.css_padding\":2,\"use.counter.css.page.css_border_color\":1,\"use.counter.css.page.css_align_self\":1,\"use.counter.css.page.css_text_shadow\":1,\""
		"use.counter.css.page.css_column_gap\":1,\"use.counter.page.mixed_content_not_upgraded_image_success\":1,\"use.counter.css.page.css_opacity\":1,\"use.counter.css.page.css_bottom\":1,\"use.counter.css.page.css_page_break_after\":1,\"use.counter.css.doc.css_webkit_transform_origin\":2,\"use.counter.css.doc.css_background_color\":2,\"use.counter.css.doc.css_appearance\":2,\"use.counter.css.page.css_list_style\":1,\"use.counter.css.page.css_stroke_dasharray\":1,\""
		"use.counter.css.doc.css_moz_transform_origin\":1,\"use.counter.css.page.css_transform\":1,\"use.counter.css.doc.css_visibility\":2,\"use.counter.css.page.css_webkit_flex\":1,\"use.counter.doc.customelementregistry_define\":1,\"use.counter.css.page.css_color\":1,\"use.counter.css.page.css_animation_timing_function\":1,\"use.counter.css.doc.css_columns\":1,\"use.counter.css.doc.css_webkit_flex\":1,\"use.counter.css.page.css_background_repeat\":1,\"use.counter.css.page.css_stroke_miterlimit\":1,\""
		"use.counter.css.doc.css_transform\":2,\"use.counter.css.page.css_animation_duration\":1,\"use.counter.css.doc.css_text_rendering\":1,\"use.counter.css.doc.css_webkit_box_pack\":1,\"use.counter.css.page.css_webkit_transition\":1,\"use.counter.css.doc.css_background_clip\":1,\"use.counter.css.doc.css_list_style_type\":1,\"use.counter.css.page.css_height\":1,\"use.counter.css.page.css_stroke\":1,\"use.counter.css.page.css_webkit_box_ordinal_group\":1,\"use.counter.css.doc.css_table_layout\":1,\""
		"use.counter.css.page.css_fill\":1,\"use.counter.css.doc.css_justify_self\":1,\"use.counter.css.page.css_webkit_transform_origin\":1,\"use.counter.css.doc.css_webkit_box_sizing\":2,\"use.counter.doc.document_featurepolicy\":1,\"use.counter.css.doc.css_gap\":2,\"use.counter.css.doc.css_margin_block_start\":1,\"use.counter.css.doc.css_webkit_align_self\":1,\"use.counter.css.page.css_border_spacing\":1,\"use.counter.css.doc.css_height\":2,\"use.counter.css.doc.css_padding_inline_start\":1,\""
		"use.counter.css.doc.css_border_image\":1,\"use.counter.css.page.css_max_width\":1,\"use.counter.css.doc.css_max_height\":2,\"use.counter.css.page.css_text_decoration\":1,\"use.counter.css.page.css_transition_timing_function\":1,\"use.counter.css.doc.css_flex\":2,\"use.counter.css.doc.css_left\":2,\"use.counter.css.page.css_webkit_filter\":1,\"use.counter.css.doc.css_transform_origin\":2,\"use.counter.css.doc.css_border_left_width\":1,\"use.counter.css.page.css_justify_self\":1,\""
		"use.counter.css.doc.css_list_style_position\":1,\"use.counter.css.page.css_padding_bottom\":1,\"use.counter.page.console_log\":1,\"use.counter.css.page.css_list_style_position\":1,\"use.counter.css.page.css_background_position_x\":1,\"use.counter.css.doc.css_moz_appearance\":2,\"use.counter.css.page.css_animation_delay\":1,\"use.counter.css.doc.css_scroll_behavior\":2,\"use.counter.css.doc.css_text_underline_offset\":1,\"use.counter.css.page.css_webkit_user_select\":1,\""
		"use.counter.css.page.css_flex\":1,\"use.counter.css.page.css_flex_shrink\":1,\"use.counter.css.page.css_scrollbar_width\":1,\"use.counter.css.doc.css_webkit_animation_duration\":1,\"use.counter.css.doc.css_cursor\":2,\"use.counter.css.doc.css_webkit_backface_visibility\":1,\"use.counter.css.doc.css_padding_top\":2,\"use.counter.css.page.css_resize\":1,\"use.counter.css.doc.css_place_items\":1,\"use.counter.css.page.webkit_padding_start\":1,\"use.counter.css.doc.css_color\":2,\""
		"use.counter.css.doc.css_min_height\":2,\"use.counter.css.doc.css_webkit_transform_style\":1,\"use.counter.css.page.css_webkit_animation_timing_function\":1,\"use.counter.css.doc.css_page_break_after\":1,\"use.counter.css.page.css_webkit_flex_basis\":1,\"use.counter.css.doc.css_object_fit\":2,\"use.counter.css.doc.webkit_margin_before\":1,\"use.counter.css.page.css_object_fit\":1,\"use.counter.css.page.css_moz_user_select\":1,\"use.counter.css.doc.css_top\":2,\"use.counter.css.page.css_user_select"
		"\":1,\"use.counter.css.doc.css_border_bottom_right_radius\":1,\"use.counter.css.doc.css_flex_direction\":2,\"use.counter.css.page.css_font_feature_settings\":1,\"use.counter.css.page.css_display\":1,\"use.counter.css.doc.css_webkit_appearance\":2,\"use.counter.css.doc.css_fill\":1,\"use.counter.css.page.css_max_height\":1,\"use.counter.css.page.css_border_left_color\":1,\"use.counter.css.page.css_outline\":1,\"use.counter.css.doc.css_outline_style\":1,\"use.counter.css.page.css_font_size\":1,\""
		"use.counter.css.page.css_letter_spacing\":1,\"use.counter.css.doc.webkit_tap_highlight_color\":2,\"use.counter.css.doc.css_grid_template_columns\":2,\"use.counter.css.page.css_flex_basis\":1,\"use.counter.css.doc.css_border_color\":2,\"use.counter.css.page.css_grid_column\":1,\"use.counter.css.page.css_webkit_transform_style\":1,\"use.counter.css.doc.css_line_height\":2,\"use.counter.css.page.css_width\":1,\"use.counter.css.doc.css_fill_rule\":1,\"use.counter.css.page.css_word_wrap\":1,\""
		"use.counter.css.doc.css_webkit_animation_delay\":1,\"use.counter.css.page.css_text_rendering\":1,\"use.counter.css.doc.css_font_style\":2,\"use.counter.css.page.css_margin_right\":1,\"use.counter.css.page.css_transform_origin\":1,\"use.counter.css.doc.css_text_align\":2,\"use.counter.css.doc.css_border_top\":2,\"use.counter.css.page.css_flex_grow\":1,\"use.counter.css.page.css_align_items\":1,\"use.counter.css.doc.css_background_attachment\":1,\"use.counter.css.page.css_background_position_y\":1,"
		"\"use.counter.css.page.css_margin_top\":1,\"use.counter.css.doc.css_border_top_left_radius\":2,\"use.counter.css.doc.css_webkit_animation_iteration_count\":1,\"use.counter.css.page.css_border_left_width\":1,\"use.counter.css.doc.css_box_shadow\":2,\"use.counter.css.page.css_webkit_border_top_left_radius\":1,\"use.counter.css.page.css_white_space\":1,\"use.counter.doc.console_log\":1,\"use.counter.css.doc.css_webkit_filter\":1,\"use.counter.page.window_chrome\":1,\""
		"use.counter.css.page.css_transition_property\":1,\"use.counter.css.page.css_float\":1,\"use.counter.css.page.css_webkit_transition_delay\":1,\"use.counter.css.doc.css_align_content\":1,\"use.counter.css.page.css_background_position\":1,\"use.counter.css.page.css_border_right_color\":1,\"use.counter.css.page.css_webkit_animation_name\":1,\"use.counter.doc.window_paymentrequest\":1,\"use.counter.css.page.css_touch_action\":1,\"use.counter.css.doc.css_transition_property\":2,\""
		"use.counter.css.page.css_webkit_transition_timing_function\":1,\"use.counter.css.doc.css_white_space\":2,\"use.counter.css.doc.css_stroke_width\":1,\"use.counter.css.doc.css_direction\":1,\"use.counter.css.page.css_padding_right\":1,\"use.counter.css.doc.css_text_shadow\":2,\"use.counter.css.page.css_border\":1,\"use.counter.css.page.css_box_sizing\":1,\"use.counter.css.doc.css_webkit_transition_timing_function\":1,\"use.counter.css.doc.css_stroke_miterlimit\":1,\""
		"use.counter.doc.mixed_content_not_upgraded_image_success\":1,\"use.counter.css.doc.css_webkit_box_ordinal_group\":1,\"use.counter.css.doc.css_webkit_transform\":2,\"use.counter.css.doc.css_animation\":2,\"use.counter.css.page.css_caret_color\":1,\"use.counter.css.page.css_border_collapse\":1,\"use.counter.css.page.widows\":1,\"use.counter.css.doc.css_bottom\":2,\"use.counter.css.doc.css_webkit_animation_timing_function\":1,\"use.counter.css.doc.css_box_sizing\":2,\""
		"use.counter.css.page.css_animation_direction\":1,\"use.counter.css.doc.css_background_position_x\":1,\"use.counter.css.doc.css_pointer_events\":2,\"use.counter.css.doc.css_overflow_wrap\":2,\"use.counter.css.doc.css_webkit_border_radius\":1,\"use.counter.css.doc.css_flex_shrink\":1,\"use.counter.css.doc.css_stroke\":1,\"use.counter.css.doc.css_border_style\":2,\"use.counter.css.doc.css_max_width\":2,\"use.counter.css.page.css_appearance\":1,\"use.counter.css.doc.css_content\":2,\""
		"use.counter.css.doc.css_align_self\":2,\"use.counter.css.doc.css_border_left_color\":2,\"use.counter.css.page.css_min_height\":1,\"use.counter.css.page.css_border_left\":1,\"use.counter.css.doc.css_stroke_dashoffset\":1,\"use.counter.css.page.css_webkit_order\":1}}}", 
		LAST);

	web_custom_request("4a949684-07d2-4a47-a1ca-0a368294c80b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/4a949684-07d2-4a47-a1ca-0a368294c80b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":0,\"start_time\":\"2024-02-23T14:30:08.418+05:30\",\"end_time\":\"2024-02-23T14:30:23.623+05:30\",\"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"windows_build_number\":19045,\"first_run_date\":\""
		"2023-02-13+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"app_channel\":\"release\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"locale\":\"en-GB\",\"app_build\":\"20240213221259\",\"app_display_version\":\"123.0\"},\"metrics\":{\"text\":{\"messaging_system.message_id\":\"n/a\",\"messaging_system.event_context\":\"\\\"cfr\\\"\"},\"string\":{\"messaging_system.addon_version\":\"20240213221259\",\"messaging_system.ping_type\":\"undesired-events\",\""
		"messaging_system.event\":\"ASR_RS_ERROR\",\"messaging_system.locale\":\"en-GB\"},\"uuid\":{\"messaging_system.impression_id\":\"e83dc9e5-3af7-4a1f-9632-fd9b5e6b6f2c\"}}}", 
		LAST);

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708678873.1.0.1708678873.0.0.0; DOMAIN=www.tastynibbles.in");

	web_url("wbanner", 
		"URL=https://www.tastynibbles.in/apps/discos/wbanner?shop=tastynibbles.myshopify.com", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.r2m02.amazontrust.com_2", 
		"URL=http://ocsp.r2m02.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\\xF6k^0\\x8A\\x05\\xF8\\xDA' \\xCBe\\x05\\xB4\\x84", 
		LAST);

	web_url("location_status", 
		"URL=https://www.tastynibbles.in/apps/discos/location_status?shop=tastynibbles.myshopify.com", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("canonical.html_6", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("track", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUdReU1tVGFvMkwzciIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiI2MGUxYmQ0MC0zZTc0LTRkOGMtYjI3OC1lNWQwNTQwMG"
		"UwMDcifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4Njc4ODcyNzMxLCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVj"
		"dENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		LAST);

	web_custom_request("6d1d32c6-0b39-454a-9dba-4cc56cb6c6c1", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/6d1d32c6-0b39-454a-9dba-4cc56cb6c6c1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":1,\"start_time\":\"2024-02-23T14:30:23.000+05:30\",\"end_time\":\"2024-02-23T14:30:23.633+05:30\",\"experiments\":{\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"windows_build_number\":19045,\"first_run_date\":\""
		"2023-02-13+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"app_channel\":\"release\",\"app_display_version\":\"123.0\",\"locale\":\"en-GB\",\"architecture\":\"x86_64\",\"app_build\":\"20240213221259\",\"os_version\":\"10.0\",\"os\":\"Windows\"},\"metrics\":{\"uuid\":{\"messaging_system.impression_id\":\"e83dc9e5-3af7-4a1f-9632-fd9b5e6b6f2c\"},\"string\":{\"messaging_system.addon_version\":\"20240213221259\",\"messaging_system.event\":\"ASR_RS_ERROR\",\"messaging_system.ping_type\":\""
		"undesired-events\",\"messaging_system.locale\":\"en-GB\"},\"text\":{\"messaging_system.message_id\":\"n/a\",\"messaging_system.event_context\":\"\\\"cfr\\\"\"}}}", 
		LAST);

	web_submit_data("configs", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=customer_info", "Value=null", ENDITEM, 
		"Name=customer_location", "Value=null", ENDITEM, 
		"Name=promotion_url", "Value=", ENDITEM, 
		LAST);

	web_url("canonical.html_7", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products.json", 
		"URL=https://www.tastynibbles.in/collections/canned-fish/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products.json_2", 
		"URL=https://www.tastynibbles.in/collections/canned-tuna/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products.json_3", 
		"URL=https://www.tastynibbles.in/collections/canned-sardine/products.json?limit=250", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("track_2", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUdReU1tVGFvMkwzciIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZnlTZXNzaW9uVG9rZW4iOiI2MGUxYmQ0MC0zZTc0LTRkOGMtYjI3OC1lNWQwNTQwMG"
		"UwMDcifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4Njc4ODczNzM4LCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		LAST);

	web_custom_request("468b5c27-533a-4535-a125-f22ce876e94a", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/468b5c27-533a-4535-a125-f22ce876e94a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":4,\"start_time\":\"2024-02-23T14:30:08.000+05:30\",\"end_time\":\"2024-02-23T14:31:06.846+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"windows_build_number\":19045,\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2023-02-13+05:30\",\"app_display_version\":\"123.0\",\"app_build\":\"20240213221259\",\"app_channel\":\"release\",\"architecture\":\"x86_64"
		"\",\"os\":\"Windows\",\"locale\":\"en-GB\",\"os_version\":\"10.0\"},\"metrics\":{\"string\":{\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-GB\"},\"string_list\":{\"newtab.blocked_sponsors\":[]},\"quantity\":{\"topsites.rows\":1},\"boolean\":{\"topsites.sponsored_enabled\":true,\"newtab.search.enabled\":true,\"pocket.sponsored_stories_enabled\":true,\"topsites.enabled\":true,\"pocket.is_signed_in\":false,\"pocket.enabled\":true}}}", 
		LAST);

	web_custom_request("collect", 
		"URL=https://analytics.google.com/g/collect?v=2&tid=G-WCN3C8KG6R&gtm=45je42l0v887559890za200&_p=1708678870461&_gaz=1&gcd=13l3l3l3l1&npa=0&dma=0&cid=1009072370.1708678872&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&sid=1708678872&sct=1&seg=0&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1&tfd=6238", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("canonical.html_8", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("435f90e5-3022-4044-a74b-24157e02622d", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/435f90e5-3022-4044-a74b-24157e02622d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t64.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":3,\"start_time\":\"2024-02-23T14:30:08.000+05:30\",\"end_time\":\"2024-02-23T14:31:06.900+05:30\",\"reason\":\"active\",\"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"56.1.0\",\"build_date\":\"1970-01-01T00:00:00+00"
		":00\",\"first_run_date\":\"2023-02-13+05:30\",\"windows_build_number\":19045,\"app_channel\":\"release\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"locale\":\"en-GB\",\"app_build\":\"20240213221259\",\"app_display_version\":\"123.0\",\"os\":\"Windows\",\"client_id\":\"b15c2122-a8ac-496f-a186-095bffc440f6\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"},\"counter\":{\"browser.engagement.active_ticks\":3},\"datetime\":{\""
		"glean.validation.first_run_hour\":\"2023-02-13T17+05:30\"},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1,\"messaging-system\":2,\"newtab\":1,\"use-counters\":1}}}}", 
		LAST);

	web_url("canonical.html_9", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_2", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708678870461&gcd=13l3l3l3l1&npa=0&dma=0&cid=1009072370.1708678872&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&sid=1708678873&sct=1&seg=0&en=page_view&_fv=1&_ss=1&_ee=1&tfd=6871", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("status.rapidssl.com", 
		"URL=http://status.rapidssl.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x07\\x99y5\\x16f\\xE8\\xBEc|\"w/\\xB5\\xD7,", 
		LAST);

	web_url("canonical.html_10", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_url("canonical.html_11", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_url("public", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.r2m03.amazontrust.com", 
		"URL=http://ocsp.r2m03.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x04\\xDD\\xE7z\\xB6`Z\\x83\\x9B\\xE4\\xC7\\xD79\\x9C\\xC7\\xE7", 
		LAST);

	web_custom_request("ocsp.r2m03.amazontrust.com_2", 
		"URL=http://ocsp.r2m03.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x04\\xDD\\xE7z\\xB6`Z\\x83\\x9B\\xE4\\xC7\\xD79\\x9C\\xC7\\xE7", 
		LAST);

	web_custom_request("ocsp.r2m03.amazontrust.com_3", 
		"URL=http://ocsp.r2m03.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x04\\xDD\\xE7z\\xB6`Z\\x83\\x9B\\xE4\\xC7\\xD79\\x9C\\xC7\\xE7", 
		LAST);

	web_url("configs_2", 
		"URL=https://api.razorpay.com/v1/magic/analytics/configs?key_id=rzp_live_UiTUCACnTlsjdB", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live&session_token="
		"F401364A0BD87724B093CCA25E97147F900944A9DDF6F16BE1A7AFB0B32E72658D166B31EBB98F19598E911B1E1B3F58B6C8EBD1C1CBCE4FE47A77F385780ADF43A2DD73EE1A6886BDD5779D94A1AE59FF914E85ED0DDCFEE4AB68602471F511B913A1792F8A68C5AABB6186B3F58815BB5B92B253F3DAD2F714903E3349B4EB590DF1B986A3B1D88E8158B417FE882C67092A", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_url("preferences", 
		"URL=https://api.razorpay.com/v1/standard_checkout/preferences?session_token=F401364A0BD87724B093CCA25E97147F900944A9DDF6F16BE1A7AFB0B32E72658D166B31EBB98F19598E911B1E1B3F58B6C8EBD1C1CBCE4FE47A77F385780ADF43A2DD73EE1A6886BDD5779D94A1AE59FF914E85ED0DDCFEE4AB68602471F511B913A1792F8A68C5AABB6186B3F58815BB5B92B253F3DAD2F714903E3349B4EB590DF1B986A3B1D88E8158B417FE882C67092A&currency%5B0%5D=INR&_%5Bpreference_source%5D=checkout_frame_standard_lite&_%5Bbuild%5D=7974256659&_%5Blibrary%5D=checkoutjs&"
		"_%5Bplatform%5D=browser&qr_required=true&key_id=rzp_live_UiTUCACnTlsjdB", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/v1/checkout/public?traffic_env=production&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live&session_token="
		"F401364A0BD87724B093CCA25E97147F900944A9DDF6F16BE1A7AFB0B32E72658D166B31EBB98F19598E911B1E1B3F58B6C8EBD1C1CBCE4FE47A77F385780ADF43A2DD73EE1A6886BDD5779D94A1AE59FF914E85ED0DDCFEE4AB68602471F511B913A1792F8A68C5AABB6186B3F58815BB5B92B253F3DAD2F714903E3349B4EB590DF1B986A3B1D88E8158B417FE882C67092A", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("gsatlasr3dvtlsca2023q3", 
		"URL=http://ocsp.globalsign.com/ca/gsatlasr3dvtlsca2023q3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x01\\xE1!7B\"\\x8D7\\xEBK\\x18$\\xE7\\x93\\xE5V", 
		LAST);

	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03s=E\\xFF=\\xA7RHH\\xC8ET1\\x02\\x8C", 
		LAST);

	web_custom_request("envelope", 
		"URL=https://o515678.ingest.sentry.io/api/6398391/envelope/?sentry_key=16be5f91f20c459cbfb51e421f4c9d2f&sentry_version=7&sentry_client=sentry.javascript.browser%2F7.64.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://api.razorpay.com/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"sent_at\":\"2024-02-23T09:01:21.814Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"7.64.0\"}}\n{\"type\":\"session\"}\n{\"sid\":\"04d75476699045dba0efdd934b30805f\",\"init\":true,\"started\":\"2024-02-23T09:01:21.813Z\",\"timestamp\":\"2024-02-23T09:01:21.813Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101"
		" Firefox/123.0\"}}", 
		LAST);

	web_custom_request("ocsp.digicert.com_4", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\xA7\\xC4\\xB8\\xB3\\xDC[\\xB5X\\x1E\\xA7\\xD7\\xF1:\\xC5i\\xF5oH\\xD7\\x89\\x04\\x14t\\x85\\x80\\xC0f\\xC7\\xDF7\\xDE\\xCF\\xBD)7\\xAA\\x03\\x1D\\xBE\\xED\\xCD\\x17\\x02\\x10\\x03s=E\\xFF=\\xA7RHH\\xC8ET1\\x02\\x8C", 
		LAST);

	/* click grocery */

	lr_think_time(24);

	web_url("grocery", 
		"URL=https://www.tastynibbles.in/collections/grocery", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_3", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708678870461&gcd=13l3l3l3l1&npa=0&dma=0&cid=1009072370.1708678872&ul=en-gb&sr=1280x720&pscdl=noapi&_s=2&sid=1708678873&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2F&dt=Tasty%20Nibbles%20-%20Ready%20to%20Eat%2C%20Canned%20Tuna%2C%20Fish%20Curries%20and%20more&en=user_engagement&_et=24359&tfd=52467", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708678872.1.1.1708678918.14.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708678873.1.1.1708678918.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_7", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678918683},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"7b91a27f-fa77-4634-8958-c186b8d6f4cb\",\"run_time_duration\":1448,\"start_time\":3784,\"page_duration"
		"\":48671},\"metadata\":{\"event_created_at_ms\":1708678918683}}]}", 
		LAST);

	web_add_cookie("_shopify_sa_t=2024-02-23T09%3A01%3A59.095Z; DOMAIN=www.tastynibbles.in");

	web_url("grocery_2", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/collections/grocery", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("produce_batch_8", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678919073},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708678919073}}]}", 
		LAST);

	web_custom_request("produce_batch_9", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708678919095},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/\",\"path\":\"/collections/grocery\",\"search\":\"\",\"title\":\"Grocery \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/collections/grocery\",\"properties\":{},\"eventId\":\"sh-d5333710-981B-406B-5AAA-DB1CE0B6E4FC\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\","
		"\"navigationType\":\"navigate\"},\"pageType\":\"collection\",\"resourceType\":\"collection\",\"resourceId\":272056484015,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visitToken\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"microSessionId\":\"d533373a-A635-4E52-DB04-4C674D904056\",\""
		"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708678919095}}]}", 
		LAST);

	web_custom_request("produce_batch_10", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678919098},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d5333712-E9AF-4E2C-837A-5B6E4C37ECFB\",\"collection_id\":272056484015,\"collection_name\":\"grocery\",\"currency\":\"INR\",\"event_name\":\"collection_page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708678919098,\"event_source_url\":\"https://www.tastynibbles.in/"
		"collections/grocery\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"page_id\":\"d533373a-A635-4E52-DB04-4C674D904056\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"deprecated_visit_token\""
		":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"session_id\":\"sh-d5333769-94D4-4381-4912-D748B11ACBB5\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708678919098}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708678872.1.1.1708678919.13.0.0; DOMAIN=www.tastynibbles.in");

	web_url("cart_2", 
		"URL=https://www.tastynibbles.in/cart?t=1708678919547&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=e47dbeb7-2c74-47a5-9ed9-83d9322e4f7c; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_11", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678919096},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d5333710-981B-406B-5AAA-DB1CE0B6E4FC\",\"referrer\":\"https://www.tastynibbles.in/\",\"canonical_url\":\"https://www.tastynibbles.in/collections/grocery\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708678919096,\"event_source_url\":\"https://"
		"www.tastynibbles.in/collections/grocery\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"page_id\":\"d533373a-A635-4E52-DB04-4C674D904056\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\""
		"deprecated_visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"session_id\":\"sh-d5333769-94D4-4381-4912-D748B11ACBB5\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708678919096}}]}", 
		LAST);

	web_custom_request("produce_batch_12", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708678919098},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708678919074}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0"
		"\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d5333710-981B-406B-5AAA-DB1CE0B6E4FC\"},\"metadata\":{\"event_created_at_ms\":1708678919095}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\""
		"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/collections/grocery\\\\\",\\\\\"title\\\\\":\\\\\"Grocery \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/collections/grocery\\\\\"}\"},"
		"\"metadata\":{\"event_created_at_ms\":1708678919095}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/"
		"y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/collections/grocery\\\\\",\\\\\"page_title\\\\\":\\\\\"Grocery \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/collections/grocery\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708678919096}}]}", 
		LAST);

	web_custom_request("track_3", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vY29sbGVjdGlvbnMvZ3JvY2VyeSIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVHUm5VWGFZd0xyRHYiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiNjBlMWJkNDAtM2U3NC"
		"00ZDhjLWIyNzgtZTVkMDU0MDBlMDA3In0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5OmNvbmZpZyIsInRpbWVzdGFtcCI6MTcwODY3ODkxOTU2OSwicHJvcGVydGllcyI6eyJkYXRhIjp7Im1lcmNoYW50X2tleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwic2hvdWxkVXNlU2hvcElkIjpmYWxzZSwiZ1RhZ0lkIjoiIiwiZ3RhZ0xhYmVsIjoiIiwicmF6b3JwYXlNYWdpY0J0bkNvbmZpZyI6e30sImNoZWNrb3V0T3B0aW9ucyI6eyJuYW1lIjoiIn0sImNhcnRDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJk"
		"dWFsIjpmYWxzZX0sInByb2R1Y3RDb25maWciOnsic3RhdHVzIjoidGVzdCIsImN1c3RvbVNlbGVjdG9yIjoiIiwiZW5hYmxlTWFnaWNCdG4iOmZhbHNlLCJlbmFibGVOYXRpdmVTaG9waWZ5Q2hlY2tib3giOmZhbHNlLCJkdWFsIjpmYWxzZX0sImN1c3RvbUNzcyI6IiJ9fX1dfQ%3D%3D\"}", 
		LAST);

	web_custom_request("r3.o.lencr.org_13", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xE3j=\\xD2\\xB6\nR/k46\\x80\\xA4di\\x08z", 
		LAST);

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708678873.1.1.1708678919.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_13", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678919601},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708678919048}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708678919052}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\""
		"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d5333710-981B-406B-5AAA-DB1CE0B6E4FC\"},\"metadata\":{\"event_created_at_ms\":1708678919053}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"collection_viewed\",\"event_type\":\""
		"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d5333712-E9AF-4E2C-837A-5B6E4C37ECFB\"},\"metadata\":{\"event_created_at_ms\":1708678919053}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\""
		"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d5333710-981B-406B-5AAA-DB1CE0B6E4FC\"},\"metadata\":{\"event_created_at_ms\":1708678919198}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\""
		"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"collection_viewed\",\"event_type\":\"standard\",\""
		"event_id\":\"sh-d5333712-E9AF-4E2C-837A-5B6E4C37ECFB\"},\"metadata\":{\"event_created_at_ms\":1708678919199}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\""
		"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":147,\"start_time\":901,\"session_id\":\"7a626bab-f224-4e28-9f95-4c98b69e873a\"},\"metadata\":{\"event_created_at_ms\":1708678919200}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\""
		"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\""
		"sh-d5333710-981B-406B-5AAA-DB1CE0B6E4FC\"},\"metadata\":{\"event_created_at_ms\":1708678919216}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\""
		"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"collection_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d5333712-E9AF-4E2C-837A-5B6E4C37ECFB\"},\"metadata\":{\"event_created_at_ms\":1708678919216}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\""
		"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":163,\"start_time\":902,\"session_id\":\"7a626bab-f224-4e28-9f95-4c98b69e873a\"},\"metadata\":{\"event_created_at_ms\""
		":1708678919217}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\""
		"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d5333710-981B-406B-5AAA-DB1CE0B6E4FC\"},\"metadata\":{\"event_created_at_ms\":1708678919430}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\""
		"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"collection_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d5333712-E9AF-4E2C-837A-5B6E4C37ECFB\"},\"metadata\":{\"event_created_at_ms\":1708678919431}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\""
		"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":383,\"start_time\":902,\"session_id\":\"7a626bab-f224-4e28-9f95-4c98b69e873a\"},\"metadata\":{\"event_created_at_ms\""
		":1708678919436}}]}", 
		LAST);

	web_custom_request("produce", 
		"URL=https://monorail-edge.shopifysvc.com/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"schema_id\":\"online_store_buyer_site_abandonment/1.1\",\"payload\":{\"shop_id\":55925866671,\"url\":\"https://www.tastynibbles.in/\",\"navigation_start\":1708678866220,\"duration\":52463,\"session_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"page_type\":\"index\"},\"metadata\":{\"event_created_at_ms\":1708678918683,\"event_sent_at_ms\":1708678918683}}", 
		LAST);

	web_custom_request("r3.o.lencr.org_14", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x03\\xE3j=\\xD2\\xB6\nR/k46\\x80\\xA4di\\x08z", 
		LAST);

	web_submit_data("configs_3", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=customer_info", "Value=null", ENDITEM, 
		"Name=customer_location", "Value=null", ENDITEM, 
		"Name=promotion_url", "Value=", ENDITEM, 
		LAST);

	web_custom_request("track_4", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vY29sbGVjdGlvbnMvZ3JvY2VyeSIsImxpYiI6Im1hZ2ljLXBsdWdpbnMiLCJidWlsZCI6ODAwNTY3ODQwMCwic2hhIjoiZjY5M2MwMzMzZjE1NGU5Y2VlODdlMGQyMTRhODk0ZDRiMTAxMDNkZCIsImtleSI6InJ6cF9saXZlX1VpVFVDQUNuVGxzamRCIiwibWFnaWNfcGx1Z2luX2lkIjoiTmVHUm5VWGFZd0xyRHYiLCJjaGVja291dFNyYyI6InByb2R1Y3Rpb24iLCJpc0RlcHJlY2F0ZU1vZGUiOmZhbHNlLCJzaG9waWZ5U2Vzc2lvblRva2VuIjoiNjBlMWJkNDAtM2U3NC"
		"00ZDhjLWIyNzgtZTVkMDU0MDBlMDA3In0sImV2ZW50cyI6W3siZXZlbnQiOiJtYWdpY19zaG9waWZ5Om1hZ2ljX3Nka19pbmplY3RlZCIsInRpbWVzdGFtcCI6MTcwODY3ODkyMDU3MiwicHJvcGVydGllcyI6eyJyZWFzb24iOiJkb20ifX1dfQ%3D%3D\"}", 
		LAST);

	web_custom_request("produce_2", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708678919146,\"server_timing\":\"{\\\"processing\\\":[348,\\\"gc:56\\\"],\\\"db\\\":[111,\\\"\\\"],\\\"fetch\\\":[22,\\\"\\\"],\\\"parse\\\":[6,\\\"\\\"],\\\"render\\\":[58,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"collection\\\"],\\\"servedBy\\\":[0,\\\"vvdc\\\"],\\\"requestID\\\""
		":[0,\\\"6a5172bf-e5ca-4fef-9630-34b98c049e9b\\\"],\\\"cfRequestDuration\\\":[434.000015,\\\"\\\"]}\",\"session_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-asia-southeast1\",\"largest_contentful_paint\":1528,\"visually_ready\":1529,\"first_contentful_paint\":803,\"navigation_start\":1708678918142,\"request_start\""
		":1708678918173,\"response_start\":1708678918663,\"response_end\":1708678918663,\"dom_loading\":1708678918672,\"dom_interactive\":1708678919498,\"dom_content_loaded_event_start\":1708678919564,\"dom_content_loaded_event_end\":1708678919566,\"dom_complete\":1708678920489,\"load_event_start\":1708678920489,\"load_event_end\":1708678920503,\"encoded_body_size\":120456,\"decoded_body_size\":725598,\"transfer_size\":123251,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\""
		"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.shopify.com/\\\":{\\\"extensions/19823ad9-d3b6-4c87-9f3d-0100d3a41a25/bogo-477/assets/wbogo.min.js\\\":\\\"3g5,5q,5q*118jg,_,3kvv*22\\\",\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\":\\\"3gb,63,63*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3ol,31,31*19rw,_,iej*23\\\"}},\\\"onnect.facebook.net/en_US/fbevents.js\\\":\\\"3q5*21\\\"},\\\"a\\\":{\\\"maicdn.com/discountmanager/"
		"common.js\\\":\\\"3ks,2o*24\\\",\\\"jax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"3ma,zq,zn*1q9o,_,1cuu*21\\\",\\\"3.\\\":{\\\"3.1/jquery.min.js\\\":\\\"3x2,oz,ow*1ngf,_,17m8*21\\\",\\\"5.1/jquery.min.js\\\":\\\"3x5,3s,3r*1nxp,_,193r*24\\\"}}},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/assets/\\\":{\\\"theme.min.js?v=142180294906365401511651758011\\\":\\\"2g3,2t,2t*1p0z,_,22j3*22*42\\\",\\\"vendor-scripts-v1.js\\\""
		":\\\"3g5,4x,4x*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3g5,5c,5c*17mf,_,m90*20\\\",\\\"ico-select.svg\\\":\\\"4ml,6c,6b,4l*1dz,113,9h\\\"},\\\"files/\\\":{\\\"Frontside_\\\":{\\\"1_280x.jpg?v=1697285649\\\":\\\"*05w,5w,dq,eo,5w,5w|1146,5h,5f,3k*13ll,14m\\\",\\\"2610fe9a-8ccd-440e-a1c2-f23d2ebf47e9_280x.jpg?v=1684049425\\\":\\\"*05w,5w,pi,rr,5w,5w|11cj,3t,3t,2b*17zl,10z\\\",\\\"e7f15f4c-e926-4631-a1b9-bd770635efe9_280x.jpg?v=1702728997\\\":\\\"*05w,5w,dq,85,5w"
		",5w|1146,5b,56,10*17cx,14c\\\"},\\\"Jaggerypowder300g_280x.jpg?v=1699946408\\\":\\\"*05w,5w,dq,l8,5w,5w|1146,5u,5u,46*187h,14n\\\",\\\"easyidiyappamriceflour1kg_1_280x.jpg?v=1705487767\\\":\\\"*05w,5w,dq,rr,5w,5w|1147,7b,7b,4w*18yf,14l\\\"},\\\"products/Frontside_\\\":{\\\"22bace2e-cc6b-426a-a178-4f1d56a40a45_280x.jpg?v=1655464252\\\":\\\"*05w,5w,pi,l8,5w,5w|11cj,3p,3p,1s*18a9,14m\\\",\\\"dca39bb3-fc61-4e4f-9164-8e91e55d64b5_280x.jpg?v=1659091515\\\":\\\"*05w,5w,pi,85,5w,5w|11ch,23,23,p*17qd,"
		"14l\\\",\\\"bb647787-59c0-493c-87aa-beab06684730_280x.jpg?v=1693585185\\\":\\\"*05w,5w,pi,eo,5w,5w|11ci,30,30,1d*14ty,10s\\\"}},\\\"ifycloud/shopify/assets/s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3g5,3x,3x*12sn,_,6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3g5,4e,4d*1a2h,_,j05*22\\\"},\\\""
		"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3lp,3w,3w*1294,_,456*21\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3lp,3d,3c*1k49,_,1w1n*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3ln,2w,2v*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3g4,6w,6w,4o*1su,o7,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"3gc*21\\\","
		"\\\"google\\\":{\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3q7,54*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"3ym,30*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"3yn,3p*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3q7,5t*21\\\"},\\\".com/pagead/1p-conversion/378882101/?...\\\":\\\"315w,n9,n9,kb,k4,k4,k4,k4,k2,je*11r,iq,-k*21\\\"}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\""
		"3g4,3l,3k*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"3kt,39*26\\\",\\\"googleads.g.doubleclick.net/pagead/viewthroughconversion/378882101/?...\\\":\\\"115v\\\"}}\",\"url\":\"https://www.tastynibbles.in/collections/grocery\",\"referrer\":\"https://www.tastynibbles.in/\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708678919155,\"event_sent_at_ms\":1708678920659}}", 
		LAST);

	web_custom_request("e1.o.lencr.org_7", 
		"URL=http://e1.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03&P\\x84\\xA79rE\\xC7\\xAF\\xD5t\\xE4pb`\\xA5\\xFA", 
		LAST);

	web_url("canonical.html_12", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("r3.o.lencr.org_15", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\x8E\\xB4\\xC3\\x84_\\xA7\\xE4!0j\\x1C\\xD8\\xC7\\x17;\\xB3 ", 
		LAST);

	web_url("canonical.html_13", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_url("public_2", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=baseline&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.r2m01.amazontrust.com", 
		"URL=http://ocsp.r2m01.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0B\\x83\\x85\\xBC\\xAB\\xB8\\x85\\\\\\x1B\nq\\xA4\rh\\xB0\\xA3", 
		LAST);

	web_url("canonical.html_14", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.r2m01.amazontrust.com_2", 
		"URL=http://ocsp.r2m01.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0B\\x83\\x85\\xBC\\xAB\\xB8\\x85\\\\\\x1B\nq\\xA4\rh\\xB0\\xA3", 
		LAST);

	web_url("jaggery-powder-500g", 
		"URL=https://www.tastynibbles.in/products/jaggery-powder-500g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.sectigo.com", 
		"URL=http://ocsp.sectigo.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10c\\x02\\x08\\x9B\\xC5\\x7F\\x1F\\xE8F\\xCA\\x8B\\xBF8\\xE2\\xD01", 
		LAST);

	web_custom_request("collect_4", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708678919094&gcd=13l3l3l3l1&npa=0&dma=0&cid=1009072370.1708678872&ul=en-gb&sr=1280x720&pscdl=noapi&_s=1&dp=%2Fcollections%2Fgrocery&dt=Grocery%20%E2%80%93%20Tasty%20Nibbles&dl=https%3A%2F%2Fwww.tastynibbles.in%2Fcollections%2Fgrocery&sid=1708678873&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&en=page_view&_ee=1&tfd=6475", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("c1a778d0cb1e42f1", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tnb-matta-rice-kg", 
		"URL=https://www.tastynibbles.in/products/tnb-matta-rice-kg?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("20240213221259", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/44d89971-3563-4933-adfa-72ab3266377c/health/Firefox/123.0/release/20240213221259?v=4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t111.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"type\":\"health\",\"id\":\"44d89971-3563-4933-adfa-72ab3266377c\",\"creationDate\":\"2024-02-23T09:00:23.761Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20240213221259\",\"name\":\"Firefox\",\"version\":\"123.0\",\"displayVersion\":\"123.0\",\"vendor\":\"Mozilla\",\"platformVersion\":\"123.0\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"os\":{\"name\":\"WINNT\",\"version\":\"10.0\"},\"reason\":\"shutdown\",\"sendFailure\":{\""
		"eTerminated\":6}},\"clientId\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"}", 
		LAST);

	web_custom_request("20240213221259_2", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/621064ba-56f6-4fdd-bbe4-642e811a8cfc/health/Firefox/123.0/release/20240213221259?v=4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t112.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"type\":\"health\",\"id\":\"621064ba-56f6-4fdd-bbe4-642e811a8cfc\",\"creationDate\":\"2024-02-23T09:00:23.737Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20240213221259\",\"name\":\"Firefox\",\"version\":\"123.0\",\"displayVersion\":\"123.0\",\"vendor\":\"Mozilla\",\"platformVersion\":\"123.0\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"os\":{\"name\":\"WINNT\",\"version\":\"10.0\"},\"reason\":\"immediate\",\"sendFailure\":{\""
		"eTerminated\":1}},\"clientId\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"}", 
		LAST);

	web_custom_request("20240213221259_3", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/73e76f56-ae3b-4127-90b5-e078807a2df6/event/Firefox/123.0/release/20240213221259?v=4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t113.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"BodyBinary={\"type\":\"event\",\"id\":\"73e76f56-ae3b-4127-90b5-e078807a2df6\",\"creationDate\":\"2024-02-23T09:00:23.759Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20240213221259\",\"name\":\"Firefox\",\"version\":\"123.0\",\"displayVersion\":\"123.0\",\"vendor\":\"Mozilla\",\"platformVersion\":\"123.0\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"reason\":\"shutdown\",\"processStartTimestamp\":1708678800000,\"sessionId\":\""
		"79e568b1-500a-49f0-a950-dadbf0adbffa\",\"subsessionId\":\"bfc4609d-fae8-47d1-bc6c-5974f97d4a72\",\"lostEventsCount\":0,\"events\":{\"parent\":[[2132,\"doh\",\"state\",\"rollback\",\"null\"],[2351,\"normandy\",\"validationFailed\",\"nimbus_experiment\",\"task-continuity-sync-after-tab-change-rollout-40\",{\"reason\":\"invalid-feature\",\"feature\":\"syncAfterTabChange\"}],[2351,\"normandy\",\"validationFailed\",\"nimbus_experiment\",\"task-continuity-sync-after-tab-change-rollout-60\",{\"reason\":"
		"\"invalid-feature\",\"feature\":\"syncAfterTabChange\"}],[2445,\"upgrade_dialog\",\"trigger\",\"reason\",\"disabled\"],[17773,\"doh\",\"state\",\"shutdown\",\"null\"]]}},\"clientId\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20240213221259\",\"version\":\"123.0\",\"vendor\":\"Mozilla\",\"displayVersion\":\"123.0\",\"platformVersion\":\""
		"123.0\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":12287,\"virtualMaxMB\":134217728,\"cpu\":{\"isWindowsSMode\":false,\"count\":4,\"cores\":4,\"vendor\":\"GenuineIntel\",\"name\":\"Intel(R) Xeon(R) Gold 6140 CPU @ 2.30GHz\",\"family\":6,\"model\":85,\"stepping\":4,\"l2cacheKB\":1024,\"l3cacheKB\":25344,\""
		"speedMHz\":2295,\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2022,\"hasSuperfetch\":true,\"hasPrefetch\":true,\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"en-US\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":19045,\"windowsUBR\":3324},\"hdd\":{\"binary\":{\"model\":\"VMware Virtual disk\",\"revision\":\"2.0\",\"type\":\"HDD\"},\"profile\":{\""
		"model\":\"VMware Virtual disk\",\"revision\":\"2.0\",\"type\":\"HDD\"},\"system\":{\"model\":\"VMware Virtual disk\",\"revision\":\"2.0\",\"type\":\"HDD\"}},\"gfx\":{\"D2DEnabled\":false,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"TargetFrameRate\":32,\"adapters\":[{\"description\":\"Microsoft Remote Display Adapter\",\"vendorID\":\"0x000d\",\"deviceID\":\"0x000d\",\"subsysID\":\"0000000d\",\"RAM\":0,\"driver\":\"Unknown\",\""
		"driverVendor\":null,\"driverVersion\":null,\"driverDate\":null,\"GPUActive\":true},{\"description\":\"VMware SVGA 3D\",\"vendorID\":\"0x15ad\",\"deviceID\":\"0x0405\",\"subsysID\":\"040515ad\",\"RAM\":8,\"driver\":\"vm3dum64_loader vm3dum64_loader vm3dum64_loader vm3dum_loader vm3dum_loader vm3dum_loader\",\"driverVendor\":null,\"driverVersion\":\"9.17.1.2\",\"driverDate\":\"11-2-2021\",\"GPUActive\":false}],\"monitors\":[{\"screenWidth\":1280,\"screenHeight\":720,\"refreshRate\":32,\""
		"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender_software\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"webrender\":{\"status\":\"blocklisted:FEATURE_FAILURE_UNKNOWN_DEVICE_VENDOR\"},\"wrCompositor\":{\"status\":\"unavailable:FEATURE_FAILURE_DCOMP_NOT_ANGLE\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"unused\"},\"d3d11\":{\"status\":\"blocklisted:FEATURE_FAILURE_UNKNOWN_DEVICE_VENDOR\"},\"d2d\":{\"status\":\""
		"unavailable:FEATURE_FAILURE_D2D_D3D11_COMP\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"hasWinPackageId\":false,\"sec\":{\"antivirus\":[\"Microsoft Defender Antivirus\"],\"antispyware\":null,\"firewall\":[\"Windows Firewall\"]},\"isWow64\":false,\"isWowARM64\":false},\"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":true,\"telemetryEnabled\":false,\"locale\":\"en-GB\",\"intl\":{\"requestedLocales\":[\"en-GB\"],\"availableLocales\":[\""
		"en-GB\",\"en-US\"],\"appLocales\":[\"en-GB\",\"en-US\"],\"systemLocales\":[\"en-US\",\"en-IN\"],\"regionalPrefsLocales\":[\"en-IN\"],\"acceptLanguages\":[\"en-GB\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true,\"background\":true},\"userPrefs\":{\"browser.search.region\":\"IN\",\"browser.search.widget.inNavBar\":false,\"browser.urlbar.autoFill\":true,\"browser.urlbar.autoFill.adaptiveHistory.enabled\":false,\"browser.urlbar.dnsResolveSingleWordsAfterSearch\":0"
		",\"browser.urlbar.quicksuggest.dataCollection.enabled\":false,\"browser.urlbar.suggest.quicksuggest.nonsponsored\":false,\"browser.urlbar.suggest.quicksuggest.sponsored\":false,\"general.smoothScroll\":true,\"media.gmp-gmpopenh264.lastInstallStart\":1708666902,\"media.gmp-gmpopenh264.lastDownloadFailed\":1708666966,\"media.gmp-gmpopenh264.lastDownloadFailReason\":\"Error: Failed downloading via ServiceRequest, status: 0, channelStatus: 2147500036, errorCode: 2, reason: error\",\""
		"media.gmp-widevinecdm.lastInstallStart\":1708666902,\"media.gmp-widevinecdm.lastDownloadFailed\":1708666966,\"media.gmp-widevinecdm.lastDownloadFailReason\":\"Error: Failed downloading via ServiceRequest, status: 0, channelStatus: 2147500036, errorCode: 2, reason: error\",\"network.trr.strict_native_fallback\":false,\"security.pki.mitm_detected\":true,\"widget.content.gtk-high-contrast.enabled\":true},\"sandbox\":{\"effectiveContentProcessLevel\":6,\"contentWin32kLockdownState\":15},\""
		"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"dltoken\":\"9769fe12-f8ce-4c12-96ca-b0f40c3c8edb\",\"experiment\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.google.com\",\"ua\":\"chrome\",\"variation\":\"%2528not%2Bset%2529\"},\"defaultSearchEngine\":\"google-b-d\",\"defaultSearchEngineData\":{\"loadPath\":\"[addon]google@search.mozilla.org\""
		",\"name\":\"Google\",\"origin\":\"default\",\"submissionURL\":\"https://www.google.com/search?client=firefox-b-d&q=\"}},\"profile\":{\"creationDate\":19401,\"firstUseDate\":19401},\"addons\":{\"activeAddons\":{\"formautofill@mozilla.org\":{\"version\":\"1.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19776,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\""
		":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19775,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\""
		":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\"screenshots@mozilla.org\":{\"version\":\"39.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19775,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\""
		"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\"webcompat@mozilla.org\":{\"version\":\"123.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19776,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\","
		"\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Follow the operating system setting for buttons, menus, and windows.\",\"name\":\"System theme \\xE2\\x80\\x94 auto\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.3\",\"scope\":4,\"foreignInstall\":false,\""
		"hasBinaryComponents\":false,\"installDay\":19401,\"updateDay\":19401},\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":null,\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":null,\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"type\":\"nimbus-nimbus\"},\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"type\":\""
		"nimbus-rollout\"}}}}", 
		LAST);

	web_custom_request("20240213221259_4", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/4e5a1198-c8e2-483a-9b39-bb97fffdf6da/main/Firefox/123.0/release/20240213221259?v=4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t114.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"BodyBinary={\"type\":\"main\",\"id\":\"4e5a1198-c8e2-483a-9b39-bb97fffdf6da\",\"creationDate\":\"2024-02-23T09:00:23.805Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20240213221259\",\"name\":\"Firefox\",\"version\":\"123.0\",\"displayVersion\":\"123.0\",\"vendor\":\"Mozilla\",\"platformVersion\":\"123.0\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"ver\":4,\"simpleMeasurements\":{\"totalTime\":18,\"start\":132,\"main\":211,\"selectProfile\""
		":231,\"afterProfileLocked\":231,\"startupCrashDetectionBegin\":632,\"startupCrashDetectionEnd\":17307,\"firstPaint\":1808,\"firstPaint2\":1502,\"sessionRestoreInit\":1047,\"sessionRestored\":1982,\"createTopLevelWindow\":326,\"quitApplication\":17653,\"profileBeforeChange\":17805,\"blankWindowShown\":634,\"AMI_startup_begin\":664,\"XPI_startup_begin\":677,\"XPI_bootstrap_addons_begin\":958,\"XPI_bootstrap_addons_end\":962,\"XPI_startup_end\":962,\"AMI_startup_end\":963,\"XPI_finalUIStartup\":1048,"
		"\"sessionRestoreInitialized\":1059,\"delayedStartupStarted\":1894,\"delayedStartupFinished\":1964,\"startupInterrupted\":0,\"debuggerAttached\":0,\"startupWindowVisibleReadBytes\":1073019,\"startupWindowVisibleWriteBytes\":73429,\"startupSessionRestoreReadBytes\":4968272,\"startupSessionRestoreWriteBytes\":356218,\"activeTicks\":4},\"processes\":{\"parent\":{\"scalars\":{\"networking.http3_enabled\":true,\"contentblocking.cryptomining_blocking_enabled\":true,\"media.element_in_page_count\":1,\""
		"dom.contentprocess.os_priority_raised\":2,\"power.total_cpu_time_ms\":1937,\"datasanitization.session_permission_exceptions\":0,\"contentblocking.category\":0,\"formautofill.availability\":false,\"security.https_only_mode_enabled_pbm\":0,\"dom.contentprocess.os_priority_lowered\":3,\"browser.engagement.active_ticks\":4,\"os.environment.is_admin_without_uac\":false,\"pictureinpicture.toggle_enabled\":true,\"security.https_only_mode_enabled\":0,\"dom.contentprocess.os_priority_change_considered\":23"
		",\"browser.engagement.session_time_including_suspend\":17906,\"browser.engagement.max_concurrent_tab_count\":1,\"startup.seconds_since_last_os_restart\":16576,\"security.global_privacy_control_enabled\":0,\"browser.engagement.session_time_excluding_suspend\":17906,\"browser.engagement.max_concurrent_tab_pinned_count\":0,\"networking.nss_initialization\":18,\"gfx.supports_hdr\":false,\"startup.profile_selection_reason\":\"default\",\"a11y.backplate\":true,\"a11y.use_system_colors\":true,\""
		"networking.loading_certs_task\":36,\"startup.profile_database_version\":\"2\",\"policies.is_enterprise\":false,\"browser.engagement.max_concurrent_window_count\":1,\"timestamps.first_paint_two\":1502,\"gfx.os_compositor\":false,\"startup.profile_count\":2,\"os.environment.launch_method\":\"Other\",\"dom.parentprocess.private_window_used\":true,\"policies.count\":0,\"a11y.always_underline_links\":false,\"timestamps.first_paint\":1807,\"startup.is_cold\":false,\"power.total_thread_wakeups\":1330,\""
		"os.environment.is_taskbar_pinned_private\":false,\"contentblocking.fingerprinting_blocking_enabled\":true,\"browser.startup.abouthome_cache_shutdownwrite\":true,\"widget.dark_mode\":false,\"os.environment.is_taskbar_pinned\":true},\"keyedScalars\":{\"os.environment.is_default_handler\":{\".pdf\":false},\"browser.engagement.sessionrestore_interstitial\":{\"deferred_restore\":1},\"networking.data_transferred_pb_per_content_type\":{\"other\":471},\"a11y.theme\":{\"default\":false},\""
		"browser.ui.interaction.tabs_bar\":{\"cmd-closeWindow\":1},\"power.cpu_time_per_process_type_ms\":{\"parent.inactive\":1937},\"security.client_auth_cert_usage\":{\"sent\":0,\"requested\":0},\"normandy.recipe_freshness\":{\"259\":1652,\"661\":2105,\"689\":2207,\"690\":2208,\"691\":2205,\"721\":2336,\"767\":2566,\"786\":2698,\"839\":2717,\"875\":2879,\"909\":3591,\"910\":3590,\"917\":3589,\"918\":2962,\"1014\":3221,\"1072\":3388,\"1080\":3410,\"1147\":3629,\"1161\":3647,\"1197\":3795,\"1207\":3821,\""
		"1208\":3822,\"1209\":3794,\"1225\":3882,\"1226\":3881,\"1227\":3880,\"1228\":3879,\"1229\":3878,\"1230\":3877,\"1231\":3876,\"1232\":3875,\"1233\":3874,\"1234\":3873,\"1235\":3872,\"1236\":3871,\"1243\":3869,\"1246\":3888,\"1248\":3899,\"1253\":3907,\"1254\":3910,\"1255\":3911,\"1256\":3912,\"1257\":3913},\"telemetry.event_counts\":{\"doh#state#shutdown\":1,\"upgrade_dialog#trigger#reason\":1,\"normandy#validationFailed#nimbus_experiment\":2,\"doh#state#rollback\":1},\""
		"networking.data_transferred_per_content_type\":{\"other\":15905},\"power.wakeups_per_process_type\":{\"parent.inactive\":1330},\"browser.ui.toolbar_widgets\":{\"bookmark_pinned_pageaction-urlbar\":true,\"import-button_pinned_bookmarks-bar\":true,\"save-to-pocket-button_pinned_nav-bar-end\":true,\"fxa-toolbar-menu-button_pinned_nav-bar-end\":true,\"stop-reload-button_pinned_nav-bar-start\":true,\"firefox-view-button_pinned_tabs-bar\":true,\"downloads-button_pinned_nav-bar-end\":true,\""
		"personal-bookmarks_pinned_bookmarks-bar\":true,\"menu-toolbar_pinned_off\":true,\"tabbrowser-tabs_pinned_tabs-bar\":true,\"titlebar_pinned_off\":true,\"reset-pbm-toolbar-button_pinned_nav-bar-end\":true,\"alltabs-button_pinned_tabs-bar\":true,\"new-tab-button_pinned_tabs-bar\":true,\"forward-button_pinned_nav-bar-start\":true,\"menubar-items_pinned_menu-bar\":true,\"back-button_pinned_nav-bar-start\":true,\"bookmarks-bar_pinned_newtab\":true,\"unified-extensions-button_pinned_nav-bar-end\":true},"
		"\"networking.speculative_connect_outcome\":{\"aborted_socket_limit\":8,\"successful\":7}}},\"content\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":1,\"2\":1,\"3\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":10,\"range\":[1,10000],\"values\":{\"1\":0,\"2\":1,\"4\":2,\"5\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":442,\"range\":[1,200],\"values\":{\""
		"8\":0,\"9\":1,\"13\":1,\"14\":2,\"46\":8,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":12,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":12,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":9,\"range\":[1,10000],\"values\":{\"1\":0,\"2\":1,\"3\":1,\"4\":1,\"5\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type"
		"\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":3,\"1\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":488,\"range\":[1,150000],\"values\":{\"25\":0,\"32\":1,\"167\":1,\"267\":1,\"338\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":1,\"2\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":3,\"1\":0}},\"GC_PRETENURE_COUNT_2\":"
		"{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":4,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":281,\"range\":[1,100],\"values\":{\"86\":0,\"88\":1,\"94\":1,\"98\":1,\"100\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":20,\"range\":[1,120],\"values\":{\"3\":0,\"4\":1,\"8\":2,\"9\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":187,\"range\":[1,2000]"
		",\"values\":{\"0\":2,\"15\":1,\"25\":2,\"29\":4,\"33\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":12,\"range\":[1,200],\"values\":{\"3\":0,\"4\":3,\"5\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":76,\"range\":[1,50000],\"values\":{\"1\":0,\"2\":1,\"14\":1,\"55\":1,\"61\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":789152,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":13,\"23\":51,\"50\":1,\"61\""
		":18,\"74\":15,\"90\":1,\"109\":3,\"132\":19,\"194\":12,\"235\":1,\"344\":1,\"416\":4,\"609\":1,\"737\":39,\"892\":26,\"1080\":20,\"1307\":1,\"1582\":1,\"1915\":1,\"2318\":4,\"3395\":4,\"8815\":1,\"33521\":2,\"49098\":2,\"225968\":2,\"273476\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":11973,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":64,\"3\":66,\"5\":3,\"8\":2,\"12\":6,\"19\":1,\"30\":82,\"47\":5,\"73\":5,\"113\":4,\"274\":1,\"1029\":2,\"1599\":2,\"2485\":0"
		"}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5991,\"range\":[1,150000000],\"values\":{\"0\":47,\"1\":41,\"2\":21,\"3\":9,\"4\":10,\"5\":11,\"6\":9,\"7\":12,\"8\":17,\"10\":17,\"12\":10,\"14\":6,\"17\":7,\"20\":6,\"24\":3,\"29\":4,\"35\":1,\"42\":1,\"50\":1,\"60\":1,\"87\":3,\"126\":2,\"151\":1,\"316\":1,\"380\":1,\"2879\":1,\"3461\":0}},\"MEMORY_RESIDENT_FAST\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":134620,\"range\":[32768,16777216],\"values\":{\"0\":1,\""
		"32768\":2,\"34922\":1,\"37217\":0}},\"MEMORY_UNIQUE\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":33884,\"range\":[32768,16777216],\"values\":{\"0\":4,\"32768\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":4,\"1\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":146,\"range\":[1,50],\"values\":{\"1\":0,\"2\":73,\"3\":0}},\"FX_ABOUTHOME_CACHE_CONSTRUCTION\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":114,\"range\":[1,10000],\"values\":{\"16\":0,\"17\":1,\"93\":1,\"101\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"JS_PAGELOAD_PARSE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":4,\"1\":0}},\""
		"TIME_TO_NON_BLANK_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":60,\"range\":[1,100000],\"values\":{\"50\":0,\"55\":1,\"61\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":92,\"range\":[1,100000],\"values\":{\"83\":0,\"92\":1,\"102\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":17,\"range\":[1,50000],\"values\":{\"1\":0,\"2\":1,\"15\":1,\"17\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,"
		"\"histogram_type\":0,\"sum\":83,\"range\":[1,50000],\"values\":{\"31\":0,\"34\":1,\"45\":1,\"50\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":86,\"range\":[1,50000],\"values\":{\"34\":0,\"37\":1,\"45\":1,\"50\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":92,\"range\":[1,50000],\"values\":{\"34\":0,\"37\":1,\"55\":1,\"61\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\""
		"sum\":692,\"range\":[1,50000],\"values\":{\"55\":0,\"61\":1,\"605\":1,\"666\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":692,\"range\":[1,50000],\"values\":{\"55\":0,\"61\":1,\"605\":1,\"666\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":694,\"range\":[1,50000],\"values\":{\"61\":0,\"67\":1,\"605\":1,\"666\":0}},\"APZ_ZOOM_ACTIVITY\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\""
		"0\":2,\"1\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":20,\"range\":[1,50],\"values\":{\"0\":2,\"2\":10,\"3\":0}}},\"keyedHistograms\":{\"MEDIA_CODEC_USED\":{\"video/avc\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}}}},\"scalars\":{\"networking.http3_enabled\":true,\"power.total_cpu_time_ms\":1394,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0,\"power.total_thread_wakeups\""
		":3562,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0},\"keyedScalars\":{\"media.video_hardware_decoding_support\":{\"video/avc\":false},\"power.cpu_time_per_process_type_ms\":{\"web.background\":1,\"web.foreground\":526,\"prealloc\":203,\"privilegedabout\":664},\"power.wakeups_per_process_type\":{\"web.background\":12,\"web.foreground\":2491,\"prealloc\":217,\"privilegedabout\":842}}},\"extension\":{\""
		"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":6,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"5\":1,\"6\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":17,\"range\":[1,10000],\"values\":{\"4\":0,\"5\":1,\"12\":1,\"14\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":343,\"range\":[1,200],\"values\":{\"43\":0,\"46\":7,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\""
		":0,\"range\":[1,2],\"values\":{\"0\":7,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":7,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":16,\"range\":[1,10000],\"values\":{\"3\":0,\"4\":1,\"12\":1,\"14\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":2,\"1\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\""
		":582,\"range\":[1,150000],\"values\":{\"167\":0,\"211\":1,\"338\":1,\"427\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":1,\"2\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":7,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\""
		"bucket_count\":50,\"histogram_type\":1,\"sum\":169,\"range\":[1,100],\"values\":{\"71\":0,\"73\":1,\"94\":1,\"96\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14,\"range\":[1,120],\"values\":{\"3\":0,\"4\":1,\"10\":1,\"11\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":135,\"range\":[1,2000],\"values\":{\"15\":0,\"17\":1,\"25\":1,\"29\":3,\"33\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7,\"range\""
		":[1,200],\"values\":{\"2\":0,\"3\":1,\"4\":1,\"5\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":136,\"range\":[1,50000],\"values\":{\"14\":0,\"15\":1,\"119\":1,\"131\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1213136,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":190,\"23\":15,\"34\":167,\"41\":12,\"50\":2,\"61\":6,\"74\":5,\"90\":1,\"109\":9,\"132\":6,\"194\":7,\"284\":23,\"416\":2,\"503\":130,\"609\":56,\"737\":40,\"892\""
		":19,\"1080\":9,\"1307\":3,\"1582\":13,\"1915\":5,\"2318\":10,\"2805\":6,\"3395\":6,\"4109\":9,\"4973\":7,\"6019\":4,\"7284\":5,\"8815\":5,\"10668\":9,\"12911\":1,\"15625\":3,\"18910\":1,\"27698\":1,\"40569\":2,\"400557\":1,\"484771\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":36903,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":205,\"3\":203,\"5\":9,\"12\":213,\"19\":17,\"30\":58,\"47\":12,\"73\":11,\"113\":15,\"176\":13,\"274\":11,\"426\":11,\"662\":6,\"1029\""
		":4,\"1599\":1,\"2485\":1,\"3862\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":11840,\"range\":[1,150000000],\"values\":{\"0\":354,\"1\":45,\"2\":23,\"3\":39,\"4\":29,\"5\":32,\"6\":29,\"7\":46,\"8\":55,\"10\":23,\"12\":14,\"14\":17,\"17\":9,\"20\":15,\"24\":9,\"29\":10,\"35\":10,\"42\":3,\"50\":4,\"60\":4,\"72\":3,\"87\":5,\"105\":1,\"126\":1,\"151\":4,\"380\":1,\"457\":1,\"660\":1,\"793\":1,\"1657\":2,\"1992\":0}},\"MEMORY_RESIDENT_FAST\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":35004,\"range\":[32768,16777216],\"values\":{\"32768\":0,\"34922\":1,\"37217\":0}},\"MEMORY_UNIQUE\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":9744,\"range\":[32768,16777216],\"values\":{\"0\":1,\"32768\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":1,\"1\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":54,\"range\":[1,50],\"values\":{\"1\":0,\"2\":27,\"3\":0}},"
		"\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"JS_PAGELOAD_PARSE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":3,\"1\":1,\"2\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":12,\"1\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":697,\"range\":[1,50000],\"values\":{\""
		"89\":0,\"98\":4,\"281\":1,\"309\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2131,\"range\":[1,50000],\"values\":{\"340\":0,\"374\":1,\"412\":3,\"454\":1,\"500\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2163,\"range\":[1,50000],\"values\":{\"374\":0,\"412\":4,\"454\":1,\"500\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2165,\"range\":[1,50000],\"values"
		"\":{\"374\":0,\"412\":4,\"454\":1,\"500\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2212,\"range\":[1,50000],\"values\":{\"374\":0,\"412\":3,\"454\":2,\"500\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2212,\"range\":[1,50000],\"values\":{\"374\":0,\"412\":3,\"454\":2,\"500\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2212,\"range\":[1,50000],\"values\":{\"374\":0,\"412\""
		":3,\"454\":2,\"500\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":20,\"1\":0}}},\"keyedHistograms\":{},\"scalars\":{\"networking.http3_enabled\":true,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0},\"keyedScalars\":{}},\"dynamic\":{\"scalars\":{},\"keyedScalars\""
		":{}},\"gpu\":{\"histograms\":{\"COMPOSITE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":118,\"range\":[1,1000],\"values\":{\"0\":11,\"1\":6,\"2\":10,\"3\":3,\"4\":3,\"5\":2,\"6\":1,\"7\":3,\"9\":1,\"10\":1,\"14\":1,\"16\":0}},\"GPU_PROCESS_INITIALIZATION_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":102,\"range\":[1,64000],\"values\":{\"92\":0,\"102\":1,\"113\":0}},\"MOUSEUP_FOLLOWED_BY_CLICK_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":76,\"range\""
		":[1,200000],\"values\":{\"22\":0,\"28\":1,\"46\":1,\"58\":0}},\"CONTENT_FULL_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":15,\"range\":[1,1000],\"values\":{\"0\":3,\"1\":1,\"14\":1,\"16\":0}},\"CONTENT_FRAME_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":366,\"range\":[1,5000],\"values\":{\"2\":0,\"3\":1,\"55\":1,\"88\":3,\"103\":0}},\"CONTENT_FRAME_TIME_VSYNC\":{\"bucket_count\":100,\"histogram_type\":1,\"sum\":312,\"range\":[8,792],\"values\":{\"88\":0,\"96\":1,\"104"
		"\":2,\"112\":0}},\"WR_RENDERER_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":58,\"range\":[1,1000],\"values\":{\"0\":21,\"1\":6,\"2\":3,\"3\":2,\"4\":1,\"5\":3,\"6\":1,\"7\":1,\"8\":1,\"9\":0}},\"WR_RENDERER_TIME_NO_SC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":49,\"range\":[1,1000],\"values\":{\"0\":20,\"1\":5,\"2\":3,\"3\":1,\"4\":1,\"5\":2,\"6\":1,\"7\":1,\"8\":1,\"9\":0}}},\"keyedHistograms\":{},\"scalars\":{\"telemetry.discarded.keyed_accumulations\":0,\""
		"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0},\"keyedScalars\":{}},\"socket\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{},\"keyedScalars\":{}},\"utility\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{},\"keyedScalars\":{}}},\"histograms\":{\"A11Y_INSTANTIATED_FLAG\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\""
		":0}},\"CHILD_PROCESS_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1914,\"range\":[1,64000],\"values\":{\"75\":0,\"83\":4,\"125\":1,\"138\":1,\"409\":3,\"452\":0}},\"CONTENT_PROCESS_LAUNCH_MAINTHREAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1,\"range\":[1,64000],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"CONTENT_PROCESS_LAUNCH_TOTAL_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":442,\"range\":[1,64000],\"values\":{\"370\":0,\"409\":1,\"452\":0}},\""
		"CONTENT_PROCESS_SYNC_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":705,\"range\":[1,64000],\"values\":{\"75\":0,\"83\":2,\"102\":1,\"409\":1,\"452\":0}},\"CONTENT_PROCESS_LAUNCH_IS_SYNC\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":1,\"1\":4,\"2\":0}},\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":34,\"range\":[1,10000],\"values\":{\"7\":0,\"8\":1,\"24\":1,\"29\":0}},\"GC_MS\":{\"bucket_count\":50,\""
		"histogram_type\":0,\"sum\":95,\"range\":[1,10000],\"values\":{\"29\":0,\"34\":1,\"57\":1,\"68\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":275,\"range\":[1,200],\"values\":{\"4\":0,\"5\":1,\"29\":9,\"31\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":10,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":10,\"1\":0}},\""
		"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":59,\"range\":[1,10000],\"values\":{\"24\":0,\"29\":2,\"34\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3,\"range\":[1,1000],\"values\":{\"0\":1,\"3\":1,\"4\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1537,\"range\":[1,150000],\"values\":{\"267\":0,\"338\":1,\"1091\":1,\"1379\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":12,\"range\":[1,"
		"10000],\"values\":{\"4\":0,\"5\":1,\"7\":1,\"8\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":1,\"range\":[1,100],\"values\":{\"0\":13,\"1\":1,\"2\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":183,\"range\":[1,100],\"values\":{\"88\":0,\"90\":1,\"92\":1,\"94\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50"
		",\"histogram_type\":0,\"sum\":15,\"range\":[1,120],\"values\":{\"3\":0,\"4\":1,\"11\":1,\"12\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":102,\"range\":[1,2000],\"values\":{\"0\":0,\"1\":1,\"2\":2,\"3\":1,\"15\":3,\"44\":1,\"50\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":10,\"range\":[1,200],\"values\":{\"4\":0,\"5\":2,\"6\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":64,\"range\":[1,50000],\""
		"values\":{\"19\":0,\"21\":1,\"41\":1,\"45\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2017120,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":419,\"23\":2,\"34\":6,\"41\":5,\"50\":4,\"61\":6,\"74\":16,\"90\":18,\"109\":5,\"132\":6,\"160\":1,\"194\":17,\"235\":1,\"284\":17,\"344\":83,\"416\":205,\"503\":75,\"609\":53,\"737\":86,\"892\":90,\"1080\":18,\"1307\":24,\"1582\":41,\"1915\":26,\"2318\":24,\"2805\":7,\"3395\":6,\"4109\":13,\"4973\":8,\"6019\":12,\""
		"7284\":6,\"8815\":12,\"10668\":54,\"12911\":2,\"15625\":4,\"18910\":1,\"27698\":3,\"40569\":1,\"49098\":1,\"71914\":1,\"87033\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":103086,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":433,\"3\":41,\"5\":28,\"8\":3,\"12\":32,\"19\":356,\"30\":190,\"47\":102,\"73\":48,\"113\":19,\"176\":22,\"274\":19,\"426\":70,\"662\":6,\"1029\":6,\"1599\":2,\"2485\":1,\"3862\":1,\"6002\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":15120,\"range\":[1,150000000],\"values\":{\"0\":369,\"1\":203,\"2\":168,\"3\":98,\"4\":79,\"5\":43,\"6\":50,\"7\":52,\"8\":67,\"10\":33,\"12\":20,\"14\":22,\"17\":17,\"20\":23,\"24\":13,\"29\":16,\"35\":19,\"42\":9,\"50\":24,\"60\":17,\"72\":15,\"87\":7,\"105\":3,\"126\":2,\"151\":4,\"182\":1,\"263\":1,\"380\":1,\"457\":1,\"549\":1,\"1146\":1,\"1378\":0}},\"GPU_PROCESS_LAUNCH_TIME_MS_2\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":324,\"range\":[1,64000],\"values"
		"\":{\"274\":0,\"303\":1,\"335\":0}},\"MEMORY_RESIDENT_FAST\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":470108,\"range\":[32768,16777216],\"values\":{\"207574\":0,\"221217\":1,\"235757\":1,\"251252\":0}},\"MEMORY_TOTAL\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":470104,\"range\":[32768,16777216],\"values\":{\"207574\":0,\"221217\":1,\"235757\":1,\"251252\":0}},\"MEMORY_UNIQUE\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":388552,\"range\":[32768,16777216],\"values\":{\""
		"171489\":0,\"182760\":1,\"194772\":1,\"207574\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":2,\"1\":0}},\"SHUTDOWN_OK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"HTTP_SCHEME_UPGRADE_TYPE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"HTTP_CHANNEL_DISPOSITION\":{\"bucket_count\":17,\"histogram_type\":1,\""
		"sum\":152,\"range\":[1,16],\"values\":{\"0\":2,\"3\":2,\"8\":2,\"9\":1,\"11\":11,\"12\":0}},\"HTTP_CHANNEL_ONSTART_SUCCESS\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":17,\"1\":1,\"2\":0}},\"DNS_LOOKUP_METHOD2\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":186,\"range\":[1,16],\"values\":{\"0\":0,\"1\":6,\"6\":30,\"7\":0}},\"DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":184,\"range\":[1,60000],\"values\":{\"2\":0,\"3\":2,\"4\":2,"
		"\"5\":2,\"7\":2,\"118\":1,\"146\":0}},\"DNS_NATIVE_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4428,\"range\":[1,60000],\"values\":{\"0\":0,\"1\":1,\"2\":2,\"3\":3,\"4\":1,\"5\":4,\"6\":3,\"7\":4,\"17\":1,\"50\":1,\"118\":1,\"3674\":1,\"4555\":0}},\"DNS_NATIVE_QUEUING\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4123,\"range\":[1,60000],\"values\":{\"0\":40,\"2\":1,\"3674\":1,\"4555\":0}},\"DNS_FAILED_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":70214,"
		"\"range\":[1,60000],\"values\":{\"0\":10,\"3\":1,\"8678\":6,\"10758\":1,\"13336\":0}},\"DNS_BLACKLIST_COUNT\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":0,\"range\":[1,21],\"values\":{\"0\":12,\"1\":0}},\"STARTUP_CACHE_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1042,\"range\":[1,50],\"values\":{\"0\":2,\"2\":521,\"3\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1030,\"range\":[1,50],\"values\":{\"0\":45,\"2\":515,\"3\":0}},\""
		"URLCLASSIFIER_LOOKUP_TIME_2\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":0,\"range\":[1,5000],\"values\":{\"0\":1,\"1\":0}},\"URLCLASSIFIER_SHUTDOWN_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,60000],\"values\":{\"0\":1,\"1\":0}},\"URLCLASSIFIER_CL_CHECK_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":0,\"range\":[1,500],\"values\":{\"0\":1,\"1\":0}},\"URLCLASSIFIER_VLPS_FILELOAD_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":7,\"range\":[1,"
		"1000],\"values\":{\"0\":12,\"1\":1,\"5\":1,\"12\":0}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":5974,\"range\":[1,10000],\"values\":{\"0\":14,\"1\":11,\"2\":10,\"3\":8,\"4\":13,\"5\":7,\"6\":8,\"7\":11,\"8\":25,\"10\":40,\"12\":41,\"14\":74,\"17\":56,\"20\":74,\"24\":25,\"29\":4,\"135\":1,\"160\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2571,\"range\":[1,10000],\"values\":{\"0\":8,\"1\":4,\"2\":5,\"3\":3,\"4\":4"
		",\"5\":3,\"6\":2,\"7\":5,\"8\":10,\"10\":13,\"12\":17,\"14\":20,\"17\":7,\"20\":6,\"24\":10,\"29\":6,\"34\":4,\"40\":2,\"48\":2,\"57\":1,\"68\":2,\"96\":1,\"114\":2,\"135\":1,\"160\":0}},\"FX_SESSION_RESTORE_STARTUP_INIT_SESSION_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,30000],\"values\":{\"0\":1,\"1\":0}},\"FX_SESSION_RESTORE_STARTUP_ONLOAD_INITIAL_WINDOW_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":18,\"range\":[1,30000],\"values\":{\"7\":0,\"12\":1,\"21\":0"
		"}},\"MS_MESSAGE_REQUEST_TIME_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":31,\"range\":[1,2000],\"values\":{\"0\":3,\"1\":1,\"3\":1,\"10\":1,\"15\":1,\"23\":0}},\"SEARCH_SERVICE_INIT2_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":361,\"range\":[1,10000],\"values\":{\"268\":0,\"318\":1,\"378\":0}},\"TOUCH_ENABLED_DEVICE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"SSL_INITIAL_FAILED_CERT_VALIDATION_TIME_MOZILLAPKIX\":{\""
		"bucket_count\":50,\"histogram_type\":0,\"sum\":266,\"range\":[1,60000],\"values\":{\"50\":0,\"62\":1,\"181\":1,\"224\":0}},\"BROWSER_IS_USER_DEFAULT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT_ERROR\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_SET_DEFAULT_DIALOG_PROMPT_RAWCOUNT\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":2,\"range\":[1,250],\""
		"values\":{\"1\":0,\"2\":1,\"3\":0}},\"BROWSER_SET_DEFAULT_ALWAYS_CHECK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"BROWSER_SET_DEFAULT_RESULT\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":3,\"range\":[1,4],\"values\":{\"2\":0,\"3\":1,\"4\":0}},\"SSL_CERT_VERIFICATION_ERRORS\":{\"bucket_count\":101,\"histogram_type\":1,\"sum\":40,\"range\":[1,100],\"values\":{\"19\":0,\"20\":2,\"21\":0}},\"SSL_PERMANENT_CERT_ERROR_OVERRIDES\":{\""
		"bucket_count\":10,\"histogram_type\":0,\"sum\":0,\"range\":[1,1024],\"values\":{\"0\":1,\"1\":0}},\"CERT_EV_STATUS\":{\"bucket_count\":11,\"histogram_type\":1,\"sum\":0,\"range\":[1,10],\"values\":{\"0\":2,\"1\":0}},\"CERT_CHAIN_KEY_SIZE_STATUS\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":6,\"range\":[1,4],\"values\":{\"2\":0,\"3\":2,\"4\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"COOKIE_BEHAVIOR\":{\""
		"bucket_count\":16,\"histogram_type\":1,\"sum\":5,\"range\":[1,15],\"values\":{\"4\":0,\"5\":1,\"6\":0}},\"TRACKING_PROTECTION_ENABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"TRACKING_PROTECTION_PBM_DISABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"QUERY_STRIPPING_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":9,\"1\":0}},\""
		"GRAPHICS_SANITY_TEST\":{\"bucket_count\":21,\"histogram_type\":1,\"sum\":0,\"range\":[1,20],\"values\":{\"0\":1,\"1\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":892,\"range\":[1,100000],\"values\":{\"75\":0,\"83\":1,\"738\":1,\"819\":0}},\"INPUT_EVENT_QUEUED_CLICK_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":51,\"range\":[1,5000],\"values\":{\"5\":0,\"6\":1,\"12\":1,\"14\":1,\"19\":1,\"20\":0}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS\":{\""
		"bucket_count\":100,\"histogram_type\":0,\"sum\":4352,\"range\":[1,60000],\"values\":{\"718\":0,\"792\":4,\"874\":1,\"964\":0}},\"WEBEXT_EXTENSION_STARTUP_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":7540,\"range\":[1,50000],\"values\":{\"158\":0,\"174\":2,\"192\":2,\"211\":2,\"1183\":4,\"1302\":1,\"1433\":0}},\"REFERRER_POLICY_COUNT\":{\"bucket_count\":19,\"histogram_type\":1,\"sum\":9,\"range\":[1,18],\"values\":{\"8\":0,\"9\":1,\"10\":0}},\"HTTPS_RR_PRESENTED\":{\"bucket_count\":3,\""
		"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"ORB_DID_EVER_BLOCK_RESPONSE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":16,\"1\":0}}},\"keyedHistograms\":{\"HTTP_CHANNEL_DISPOSITION_UPGRADE\":{\"disabledNoReason\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":34,\"range\":[1,50],\"values\":{\"0\":2,\"1\":1,\"3\":11,\"4\":0}},\"disabledWont\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":6,\"range\":[1,50],\"values\":{"
		"\"0\":2,\"3\":2,\"4\":0}}},\"TRANSACTION_WAIT_TIME_HTTPS_RR\":{\"h1_no_https_rr\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":8620,\"range\":[1,5000],\"values\":{\"3785\":0,\"4058\":2,\"4350\":0}}},\"HTTP3_CHANNEL_ONSTART_SUCCESS\":{\"no_http3\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":17,\"1\":0}}},\"DNS_LOOKUP_DISPOSITION3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":258,\"range\":[1,50],\"values\":{\"5\":0"
		",\"6\":22,\"7\":18,\"8\":0}}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS_BY_ADDONID\":{\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":866,\"range\":[1,60000],\"values\":{\"718\":0,\"792\":1,\"874\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":865,\"range\":[1,60000],\"values\":{\"718\":0,\"792\":1,\"874\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":922,\"range\":[1,60000],\"values\":{\"792\":0,\""
		"874\":1,\"964\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":849,\"range\":[1,60000],\"values\":{\"718\":0,\"792\":1,\"874\":0}},\"addons-search-detection@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":850,\"range\":[1,60000],\"values\":{\"718\":0,\"792\":1,\"874\":0}}},\"WEBEXT_EXTENSION_STARTUP_MS_BY_ADDONID\":{\"bing@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":181,\"range\":[1,50000],\"values\":{\"158\":0,\""
		"174\":1,\"192\":0}},\"default-theme@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":216,\"range\":[1,50000],\"values\":{\"192\":0,\"211\":1,\"232\":0}},\"google@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":203,\"range\":[1,50000],\"values\":{\"174\":0,\"192\":1,\"211\":0}},\"ddg@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":177,\"range\":[1,50000],\"values\":{\"158\":0,\"174\":1,\"192\":0}},\"pictureinpicture@mozilla.org\":{\""
		"bucket_count\":100,\"histogram_type\":0,\"sum\":1295,\"range\":[1,50000],\"values\":{\"1075\":0,\"1183\":1,\"1302\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1236,\"range\":[1,50000],\"values\":{\"1075\":0,\"1183\":1,\"1302\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1312,\"range\":[1,50000],\"values\":{\"1183\":0,\"1302\":1,\"1433\":0}},\"wikipedia@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum"
		"\":212,\"range\":[1,50000],\"values\":{\"192\":0,\"211\":1,\"232\":0}},\"addons-search-detection@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1210,\"range\":[1,50000],\"values\":{\"1075\":0,\"1183\":1,\"1302\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1298,\"range\":[1,50000],\"values\":{\"1075\":0,\"1183\":1,\"1302\":0}},\"ebay@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":200,\"range\":[1,50000],\"values\":{"
		"\"174\":0,\"192\":1,\"211\":0}}},\"QM_FIRST_INITIALIZATION_ATTEMPT\":{\"Storage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"PersistentOrigin\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"QM_SHUTDOWN_TIME_V0\":{\"Normal\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":0,\"range\":[1,60000],\"values\":{\"0\":1,\"1\":0}}},\"HTTP_TRAFFIC_ANALYSIS_3\":{\"Connection\":{\""
		"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"Transaction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}}},\"SQLITE_STORE_OPEN\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"2918063365piupsah.sqlite"
		"\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"ls-archive.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\""
		"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":5,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\""
		"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":6,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0"
		"\":3,\"1\":0}}},\"SQLITE_STORE_QUERY\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":7,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":16,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1"
		",50],\"values\":{\"0\":32,\"1\":0}},\"ls-archive.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":21,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":12,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\""
		":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":113,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":9,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":10,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":64,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\""
		"sum\":0,\"range\":[1,50],\"values\":{\"0\":527,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":14,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":34,\"1\":0}}},\"HTTP_CONNECTION_CLOSE_REASON\":{\"11_1_0_0_0\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":35,\"range\":[1,50],\"values\":{\"4\":0,\"5\":7,\"6\":0}},\"11_1_0_0_2\":{\""
		"bucket_count\":51,\"histogram_type\":1,\"sum\":64,\"range\":[1,50],\"values\":{\"15\":0,\"16\":4,\"17\":0}},\"11_1_0_0_1\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":16,\"range\":[1,50],\"values\":{\"15\":0,\"16\":1,\"17\":0}},\"11_0_0_0_0\":{\"bucket_count\":51,\"histogram_type\":1,\"sum\":5,\"range\":[1,50],\"values\":{\"4\":0,\"5\":1,\"6\":0}}}},\"info\":{\"reason\":\"shutdown\",\"revision\":\"https://hg.mozilla.org/releases/mozilla-release/rev/d3c71a6fc9a1aecf1fe04f8de2fc0b816588e677\","
		"\"timezoneOffset\":330,\"previousBuildId\":\"20240205133611\",\"sessionId\":\"79e568b1-500a-49f0-a950-dadbf0adbffa\",\"subsessionId\":\"bfc4609d-fae8-47d1-bc6c-5974f97d4a72\",\"previousSessionId\":\"6cf8fff0-6731-45f3-b09f-1a592e2c691f\",\"previousSubsessionId\":\"665759ca-a453-4200-96fb-0d49be7c5170\",\"subsessionCounter\":1,\"profileSubsessionCounter\":2,\"sessionStartDate\":\"2024-02-23T14:00:00.0+05:30\",\"subsessionStartDate\":\"2024-02-23T14:00:00.0+05:30\",\"sessionLength\":17,\""
		"subsessionLength\":16,\"addons\":\"formautofill%40mozilla.org:1.0.1,pictureinpicture%40mozilla.org:1.0.0,screenshots%40mozilla.org:39.0.1,webcompat%40mozilla.org:123.0.0,default-theme%40mozilla.org:1.3,addons-search-detection%40mozilla.com:2.0.0,google%40search.mozilla.org:1.4,wikipedia%40search.mozilla.org:1.3,bing%40search.mozilla.org:1.6,ddg%40search.mozilla.org:1.4,ebay%40search.mozilla.org:1.4\"}},\"clientId\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\",\"environment\":{\"build\":{\""
		"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20240213221259\",\"version\":\"123.0\",\"vendor\":\"Mozilla\",\"displayVersion\":\"123.0\",\"platformVersion\":\"123.0\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":12287,\""
		"virtualMaxMB\":134217728,\"cpu\":{\"isWindowsSMode\":false,\"count\":4,\"cores\":4,\"vendor\":\"GenuineIntel\",\"name\":\"Intel(R) Xeon(R) Gold 6140 CPU @ 2.30GHz\",\"family\":6,\"model\":85,\"stepping\":4,\"l2cacheKB\":1024,\"l3cacheKB\":25344,\"speedMHz\":2295,\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2022,\"hasSuperfetch\":true,\"hasPrefetch\":true,\"name\":\"Windows_NT\",\""
		"version\":\"10.0\",\"locale\":\"en-US\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":19045,\"windowsUBR\":3324},\"hdd\":{\"binary\":{\"model\":\"VMware Virtual disk\",\"revision\":\"2.0\",\"type\":\"HDD\"},\"profile\":{\"model\":\"VMware Virtual disk\",\"revision\":\"2.0\",\"type\":\"HDD\"},\"system\":{\"model\":\"VMware Virtual disk\",\"revision\":\"2.0\",\"type\":\"HDD\"}},\"gfx\":{\"D2DEnabled\":false,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,"
		"\"EmbeddedInFirefoxReality\":false,\"TargetFrameRate\":32,\"adapters\":[{\"description\":\"Microsoft Remote Display Adapter\",\"vendorID\":\"0x000d\",\"deviceID\":\"0x000d\",\"subsysID\":\"0000000d\",\"RAM\":0,\"driver\":\"Unknown\",\"driverVendor\":null,\"driverVersion\":null,\"driverDate\":null,\"GPUActive\":true},{\"description\":\"VMware SVGA 3D\",\"vendorID\":\"0x15ad\",\"deviceID\":\"0x0405\",\"subsysID\":\"040515ad\",\"RAM\":8,\"driver\":\"vm3dum64_loader vm3dum64_loader vm3dum64_loader "
		"vm3dum_loader vm3dum_loader vm3dum_loader\",\"driverVendor\":null,\"driverVersion\":\"9.17.1.2\",\"driverDate\":\"11-2-2021\",\"GPUActive\":false}],\"monitors\":[{\"screenWidth\":1280,\"screenHeight\":720,\"refreshRate\":32,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender_software\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"webrender\":{\"status\":\"blocklisted:FEATURE_FAILURE_UNKNOWN_DEVICE_VENDOR\"},\"wrCompositor\":{\"status\":\""
		"unavailable:FEATURE_FAILURE_DCOMP_NOT_ANGLE\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"unused\"},\"d3d11\":{\"status\":\"blocklisted:FEATURE_FAILURE_UNKNOWN_DEVICE_VENDOR\"},\"d2d\":{\"status\":\"unavailable:FEATURE_FAILURE_D2D_D3D11_COMP\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"hasWinPackageId\":false,\"sec\":{\"antivirus\":[\"Microsoft Defender Antivirus\"],\"antispyware\":null,\"firewall\":[\"Windows Firewall\"]},\"isWow64\":false,\"isWowARM64\":false},\""
		"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":true,\"telemetryEnabled\":false,\"locale\":\"en-GB\",\"intl\":{\"requestedLocales\":[\"en-GB\"],\"availableLocales\":[\"en-GB\",\"en-US\"],\"appLocales\":[\"en-GB\",\"en-US\"],\"systemLocales\":[\"en-US\",\"en-IN\"],\"regionalPrefsLocales\":[\"en-IN\"],\"acceptLanguages\":[\"en-GB\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true,\"background\":true},\""
		"userPrefs\":{\"browser.search.region\":\"IN\",\"browser.search.widget.inNavBar\":false,\"browser.urlbar.autoFill\":true,\"browser.urlbar.autoFill.adaptiveHistory.enabled\":false,\"browser.urlbar.dnsResolveSingleWordsAfterSearch\":0,\"browser.urlbar.quicksuggest.dataCollection.enabled\":false,\"browser.urlbar.suggest.quicksuggest.nonsponsored\":false,\"browser.urlbar.suggest.quicksuggest.sponsored\":false,\"general.smoothScroll\":true,\"media.gmp-gmpopenh264.lastInstallStart\":1708666902,\""
		"media.gmp-gmpopenh264.lastDownloadFailed\":1708666966,\"media.gmp-gmpopenh264.lastDownloadFailReason\":\"Error: Failed downloading via ServiceRequest, status: 0, channelStatus: 2147500036, errorCode: 2, reason: error\",\"media.gmp-widevinecdm.lastInstallStart\":1708666902,\"media.gmp-widevinecdm.lastDownloadFailed\":1708666966,\"media.gmp-widevinecdm.lastDownloadFailReason\":\"Error: Failed downloading via ServiceRequest, status: 0, channelStatus: 2147500036, errorCode: 2, reason: error\",\""
		"network.trr.strict_native_fallback\":false,\"security.pki.mitm_detected\":true,\"widget.content.gtk-high-contrast.enabled\":true},\"sandbox\":{\"effectiveContentProcessLevel\":6,\"contentWin32kLockdownState\":15},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"dltoken\":\"9769fe12-f8ce-4c12-96ca-b0f40c3c8edb\",\"experiment\":\"%2528not%2Bset%2529\",\"medium\":\""
		"referral\",\"source\":\"www.google.com\",\"ua\":\"chrome\",\"variation\":\"%2528not%2Bset%2529\"},\"defaultSearchEngine\":\"google-b-d\",\"defaultSearchEngineData\":{\"loadPath\":\"[addon]google@search.mozilla.org\",\"name\":\"Google\",\"origin\":\"default\",\"submissionURL\":\"https://www.google.com/search?client=firefox-b-d&q=\"}},\"profile\":{\"creationDate\":19401,\"firstUseDate\":19401},\"addons\":{\"activeAddons\":{\"formautofill@mozilla.org\":{\"version\":\"1.0.1\",\"scope\":1,\"type\":\""
		"extension\",\"updateDay\":19776,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19775,\"isSystem\":true,\""
		"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\"screenshots@mozilla.org\":{\"version\":\"39.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19775,\"isSystem\":true,\""
		"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\"webcompat@mozilla.org\":{\"version\":\"123.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\""
		":19776,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Follow "
		"the operating system setting for buttons, menus, and windows.\",\"name\":\"System theme \\xE2\\x80\\x94 auto\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.3\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19401,\"updateDay\":19401},\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":null,\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":null,\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\""
		"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"type\":\"nimbus-nimbus\"},\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"type\":\"nimbus-rollout\"}}}}", 
		LAST);

	web_custom_request("20240205133611", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/4cfe13bd-cc5c-4431-941e-450cf3e3c896/health/Firefox/122.0.1/release/20240205133611?v=4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t115.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"type\":\"health\",\"id\":\"4cfe13bd-cc5c-4431-941e-450cf3e3c896\",\"creationDate\":\"2024-02-23T05:42:45.994Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20240205133611\",\"name\":\"Firefox\",\"version\":\"122.0.1\",\"displayVersion\":\"122.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"122.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"os\":{\"name\":\"WINNT\",\"version\":\"10.0\"},\"reason\":\"immediate\",\"sendFailure\":{\""
		"eUnreachable\":1}},\"clientId\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\"}", 
		LAST);

	web_custom_request("20240205133611_2", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/754158bb-d374-4389-963d-ff4d6b96146a/update/Firefox/122.0.1/release/20240205133611?v=4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t116.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"BodyBinary={\"type\":\"update\",\"id\":\"754158bb-d374-4389-963d-ff4d6b96146a\",\"creationDate\":\"2024-02-23T05:41:25.722Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20240205133611\",\"name\":\"Firefox\",\"version\":\"122.0.1\",\"displayVersion\":\"122.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"122.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"reason\":\"ready\",\"targetChannel\":\"release\",\"targetVersion\":\"123.0\",\""
		"targetBuildId\":\"20240213221259\",\"targetDisplayVersion\":\"123.0\"},\"clientId\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20240205133611\",\"version\":\"122.0.1\",\"vendor\":\"Mozilla\",\"displayVersion\":\"122.0.1\",\"platformVersion\":\"122.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\"distributionId\""
		":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":12287,\"virtualMaxMB\":134217728,\"cpu\":{\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"en-US\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":19045,\"windowsUBR\":3324},\""
		"hdd\":{\"profile\":{\"model\":null,\"revision\":null,\"type\":null},\"binary\":{\"model\":null,\"revision\":null,\"type\":null},\"system\":{\"model\":null,\"revision\":null,\"type\":null}},\"gfx\":{\"D2DEnabled\":false,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"TargetFrameRate\":32,\"adapters\":[{\"description\":\"Microsoft Remote Display Adapter\",\"vendorID\":\"0x000d\",\"deviceID\":\"0x000d\",\"subsysID\":\"0000000d\",\"RAM\":0,\""
		"driver\":\"Unknown\",\"driverVendor\":null,\"driverVersion\":null,\"driverDate\":null,\"GPUActive\":true},{\"description\":\"VMware SVGA 3D\",\"vendorID\":\"0x15ad\",\"deviceID\":\"0x0405\",\"subsysID\":\"040515ad\",\"RAM\":8,\"driver\":\"vm3dum64_loader vm3dum64_loader vm3dum64_loader vm3dum_loader vm3dum_loader vm3dum_loader\",\"driverVendor\":null,\"driverVersion\":\"9.17.1.2\",\"driverDate\":\"11-2-2021\",\"GPUActive\":false}],\"monitors\":[{\"screenWidth\":1280,\"screenHeight\":720,\""
		"refreshRate\":32,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender_software\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"blocklisted:FEATURE_FAILURE_EMPTY_DRIVER_VERSION\"},\"webrender\":{\"status\":\"blocklisted:FEATURE_FAILURE_UNKNOWN_DEVICE_VENDOR\"},\"wrCompositor\":{\"status\":\"unavailable:FEATURE_FAILURE_DCOMP_NOT_ANGLE\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"unused\"},\"d3d11\":{\"status\":\"blocklisted"
		":FEATURE_FAILURE_UNKNOWN_DEVICE_VENDOR\"},\"d2d\":{\"status\":\"unavailable:FEATURE_FAILURE_D2D_D3D11_COMP\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"hasWinPackageId\":false,\"sec\":{\"antivirus\":[\"Microsoft Defender Antivirus\"],\"antispyware\":null,\"firewall\":[\"Windows Firewall\"]}},\"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":true,\"telemetryEnabled\":false,\"locale\":\"en-GB\",\"intl\":{\"requestedLocales\":[\"en-GB\"],\""
		"availableLocales\":[\"en-GB\",\"en-US\"],\"appLocales\":[\"en-GB\",\"en-US\"],\"systemLocales\":[\"en-US\",\"en-IN\"],\"regionalPrefsLocales\":[\"en-IN\"],\"acceptLanguages\":[\"en-GB\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true,\"background\":true},\"userPrefs\":{\"browser.search.region\":\"IN\",\"browser.search.widget.inNavBar\":false,\"browser.urlbar.autoFill\":true,\"browser.urlbar.autoFill.adaptiveHistory.enabled\":false,\""
		"browser.urlbar.dnsResolveSingleWordsAfterSearch\":0,\"browser.urlbar.quicksuggest.dataCollection.enabled\":false,\"browser.urlbar.suggest.quicksuggest.nonsponsored\":false,\"browser.urlbar.suggest.quicksuggest.sponsored\":false,\"network.trr.strict_native_fallback\":false,\"widget.content.gtk-high-contrast.enabled\":true,\"security.pki.mitm_detected\":true},\"sandbox\":{\"effectiveContentProcessLevel\":6,\"contentWin32kLockdownState\":5},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled"
		"\":true,\"isDefaultBrowser\":false,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"dltoken\":\"9769fe12-f8ce-4c12-96ca-b0f40c3c8edb\",\"experiment\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.google.com\",\"ua\":\"chrome\",\"variation\":\"%2528not%2Bset%2529\"},\"defaultSearchEngine\":\"google-b-d\",\"defaultSearchEngineData\":{\"loadPath\":\"[addon]google@search.mozilla.org\",\"name\":\"Google\",\"origin\":\"default\",\""
		"submissionURL\":\"https://www.google.com/search?client=firefox-b-d&q=\"}},\"profile\":{\"creationDate\":19401,\"firstUseDate\":19401},\"addons\":{\"activeAddons\":{\"formautofill@mozilla.org\":{\"version\":\"1.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19775,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\""
		"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19775,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\""
		"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\"screenshots@mozilla.org\":{\"version\":\"39.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19775,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\""
		"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false},\"webcompat@mozilla.org\":{\"version\":\"121.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19775,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,"
		"\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384,\"quarantineIgnoredByApp\":true,\"quarantineIgnoredByUser\":false}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Follow the operating system setting for buttons, menus, and windows.\",\"name\":\"System theme \\xE2\\x80\\x94 auto\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.3\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19401"
		",\"updateDay\":19401},\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":null,\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":null,\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"type\":\"nimbus-nimbus\"},\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\"rollout\",\"type\":\"nimbus-rollout\"}}}}", 
		LAST);

	web_custom_request("20230127170202", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/18f07da6-da56-4569-863f-a077e28904c5/main/Firefox/109.0.1/release/20230127170202?v=4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t117.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"type\":\"main\",\"id\":\"18f07da6-da56-4569-863f-a077e28904c5\",\"creationDate\":\"2023-02-13T11:36:42.765Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20230127170202\",\"name\":\"Firefox\",\"version\":\"109.0.1\",\"displayVersion\":\"109.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"109.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"ver\":4,\"simpleMeasurements\":{\"totalTime\":23,\"start\":11,\"main\":817,\"selectProfile\""
		":822,\"afterProfileLocked\":826,\"startupCrashDetectionBegin\":876,\"startupCrashDetectionEnd\":23320,\"firstPaint\":3528,\"firstPaint2\":1395,\"sessionRestoreInit\":1188,\"sessionRestored\":3588,\"createTopLevelWindow\":1046,\"quitApplication\":23325,\"profileBeforeChange\":23394,\"AMI_startup_begin\":894,\"XPI_startup_begin\":910,\"XPI_bootstrap_addons_begin\":1033,\"XPI_bootstrap_addons_end\":1036,\"XPI_startup_end\":1036,\"AMI_startup_end\":1037,\"XPI_finalUIStartup\":1188,\""
		"sessionRestoreInitialized\":1205,\"delayedStartupStarted\":3532,\"delayedStartupFinished\":3571,\"startupInterrupted\":0,\"debuggerAttached\":0,\"startupWindowVisibleReadBytes\":383609,\"startupWindowVisibleWriteBytes\":1778826,\"startupSessionRestoreReadBytes\":5398718,\"startupSessionRestoreWriteBytes\":12589379,\"activeTicks\":4},\"processes\":{\"parent\":{\"scalars\":{\"os.environment.is_taskbar_pinned_private\":false,\"startup.seconds_since_last_os_restart\":248,\"blocklist.mlbf_enabled\""
		":true,\"networking.http3_enabled\":true,\"gfx.supports_hdr\":false,\"startup.profile_selection_reason\":\"firstrun-created-default\",\"browser.engagement.max_concurrent_tab_count\":2,\"os.environment.launch_method\":\"Other\",\"gfx.os_compositor\":false,\"startup.is_cold\":false,\"security.global_privacy_control_enabled\":0,\"widget.dark_mode\":false,\"media.element_in_page_count\":1,\"browser.startup.abouthome_cache_result\":7,\"security.https_only_mode_enabled\":0,\""
		"browser.engagement.session_time_excluding_suspend\":23489,\"contentblocking.fingerprinting_blocking_enabled\":true,\"contentblocking.category\":0,\"timestamps.first_paint_two\":1394,\"browser.engagement.active_ticks\":4,\"browser.engagement.session_time_including_suspend\":23489,\"networking.nss_initialization\":26,\"timestamps.first_paint\":3527,\"os.environment.is_taskbar_pinned\":true,\"dom.contentprocess.os_priority_raised\":5,\"datasanitization.session_permission_exceptions\":0,\""
		"power.total_thread_wakeups\":51572,\"os.environment.is_admin_without_uac\":false,\"networking.loading_certs_task\":5,\"browser.engagement.unique_domains_count\":1,\"formautofill.availability\":true,\"dom.contentprocess.os_priority_lowered\":3,\"browser.engagement.unfiltered_uri_count\":1,\"a11y.backplate\":true,\"dom.contentprocess.os_priority_change_considered\":25,\"browser.engagement.total_uri_count_normal_and_private_mode\":1,\"pictureinpicture.toggle_enabled\":true,\"power.total_cpu_time_ms\""
		":2442,\"contentblocking.cryptomining_blocking_enabled\":true,\"browser.engagement.total_uri_count\":1,\"security.https_only_mode_enabled_pbm\":0,\"browser.engagement.max_concurrent_window_count\":1},\"keyedScalars\":{\"power.cpu_time_per_process_type_ms\":{\"parent.inactive\":2442},\"networking.data_transferred_v3_kb\":{\"Y1_N1\":828,\"Y0_N1Sys\":4204,\"Y2_N3Oth\":164},\"telemetry.event_counts\":{\"doh#state#shutdown\":1,\"normandy#enroll#nimbus_experiment\":3,\"normandy#expose#nimbus_experiment\""
		":1,\"upgrade_dialog#trigger#reason\":1},\"security.client_auth_cert_usage\":{\"sent\":0,\"requested\":0},\"normandy.recipe_freshness\":{\"259\":1652,\"661\":2105,\"689\":2207,\"690\":2208,\"691\":2205,\"721\":2336,\"767\":2566,\"786\":2698,\"839\":2717,\"875\":2879,\"909\":3591,\"910\":3590,\"917\":3589,\"918\":2962,\"1014\":3221,\"1072\":3388,\"1080\":3410,\"1147\":3629,\"1161\":3647,\"1197\":3795,\"1207\":3821,\"1208\":3822,\"1209\":3794,\"1225\":3882,\"1226\":3881,\"1227\":3880,\"1228\":3879,\""
		"1229\":3878,\"1230\":3877,\"1231\":3876,\"1232\":3875,\"1233\":3874,\"1234\":3873,\"1235\":3872,\"1236\":3871,\"1243\":3869,\"1246\":3888,\"1248\":3899,\"1253\":3907,\"1254\":3910,\"1255\":3911,\"1256\":3912,\"1257\":3913},\"a11y.theme\":{\"default\":false},\"power.wakeups_per_process_type\":{\"parent.inactive\":51572},\"os.environment.is_default_handler\":{\".pdf\":false},\"browser.ui.interaction.tabs_bar\":{\"cmd-closeWindow\":1},\"contextual.services.topsites.impression\":{\"newtab_1\":1,\""
		"newtab_2\":1},\"browser.ui.toolbar_widgets\":{\"bookmark_pinned_pageaction-urlbar\":true,\"save-to-pocket-button_pinned_nav-bar-end\":true,\"fxa-toolbar-menu-button_pinned_nav-bar-end\":true,\"stop-reload-button_pinned_nav-bar-start\":true,\"firefox-view-button_pinned_tabs-bar\":true,\"downloads-button_pinned_nav-bar-end\":true,\"personal-bookmarks_pinned_bookmarks-bar\":true,\"menu-toolbar_pinned_off\":true,\"tabbrowser-tabs_pinned_tabs-bar\":true,\"titlebar_pinned_off\":true,\""
		"alltabs-button_pinned_tabs-bar\":true,\"new-tab-button_pinned_tabs-bar\":true,\"forward-button_pinned_nav-bar-start\":true,\"menubar-items_pinned_menu-bar\":true,\"back-button_pinned_nav-bar-start\":true,\"bookmarks-bar_pinned_newtab\":true}}},\"content\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":6,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":2,\"4\":1,\"5\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":36,\"range\":[1,10000"
		"],\"values\":{\"1\":0,\"2\":1,\"3\":1,\"7\":1,\"10\":1,\"12\":1,\"14\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":569,\"range\":[1,200],\"values\":{\"4\":0,\"5\":2,\"8\":1,\"10\":1,\"12\":1,\"13\":3,\"46\":10,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":18,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":18,\"1\":0}},\""
		"GC_ANIMATION_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":18,\"range\":[1,10000],\"values\":{\"0\":4,\"1\":2,\"3\":1,\"12\":1,\"14\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":31,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"3\":2,\"10\":1,\"12\":1,\"14\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":5,\"range\":[1,1000],\"values\":{\"0\":3,\"2\":1,\"3\":1,\"4\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\""
		":0,\"sum\":7025,\"range\":[1,150000],\"values\":{\"32\":0,\"40\":1,\"132\":3,\"5630\":1,\"7118\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":4,\"1\":1,\"2\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":5,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":12,\"1\":0}},\""
		"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":455,\"range\":[1,100],\"values\":{\"86\":0,\"88\":2,\"90\":1,\"92\":1,\"94\":1,\"96\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":32,\"range\":[1,120],\"values\":{\"3\":0,\"4\":3,\"10\":2,\"11\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":316,\"range\":[1,2000],\"values\":{\"0\":2,\"4\":1,\"9\":1,\"17\":2,\"22\":1,\"29\":4,\"33\":1,\"86\":1,\"99\":0}}"
		",\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":18,\"range\":[1,200],\"values\":{\"2\":0,\"3\":3,\"4\":1,\"5\":1,\"6\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":217,\"range\":[1,50000],\"values\":{\"21\":0,\"23\":1,\"34\":1,\"41\":1,\"50\":1,\"61\":1,\"67\":0}},\"GC_WAIT_FOR_IDLE_MS\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":0,\"range\":[1,120000],\"values\":{\"0\":4,\"1\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":2324664,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":153,\"23\":71,\"28\":1,\"34\":12,\"41\":13,\"50\":10,\"61\":31,\"74\":28,\"90\":8,\"109\":10,\"132\":33,\"160\":1,\"194\":26,\"284\":2,\"344\":14,\"416\":27,\"503\":12,\"609\":15,\"737\":31,\"892\":45,\"1080\":10,\"1307\":2,\"1915\":6,\"2318\":12,\"2805\":2,\"3395\":12,\"4109\":6,\"4973\":6,\"6019\":6,\"7284\":1,\"8815\":1,\"12911\":1,\"22886\":5,\"186713\":4,\"225968\":4,\"273476\":0}},\"DESERIALIZE_ITEMS\":{"
		"\"bucket_count\":50,\"histogram_type\":0,\"sum\":102675,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":250,\"3\":126,\"5\":20,\"12\":7,\"19\":49,\"30\":89,\"47\":7,\"73\":23,\"113\":16,\"176\":16,\"274\":3,\"426\":2,\"1029\":5,\"9328\":8,\"14498\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":36823,\"range\":[1,150000000],\"values\":{\"0\":150,\"1\":97,\"2\":84,\"3\":34,\"4\":23,\"5\":14,\"6\":23,\"7\":10,\"8\":37,\"10\":15,\"12\":9,\"14\":26,\"17\":13,\"20\":14,\""
		"24\":17,\"29\":10,\"35\":6,\"42\":1,\"50\":4,\"60\":6,\"72\":4,\"87\":7,\"105\":1,\"126\":6,\"151\":1,\"793\":1,\"1992\":1,\"2395\":4,\"3461\":1,\"4161\":1,\"8689\":1,\"10445\":0}},\"TOTAL_CONTENT_PAGE_LOAD_TIME\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2176,\"range\":[100,30000],\"values\":{\"1947\":0,\"2064\":1,\"2188\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":276,\"range\":[1,50],\"values\":{\"0\":11,\"2\":138,\"3\":0}},\""
		"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4640,\"range\":[1,10000],\"values\":{\"0\":19,\"1\":4,\"2\":2,\"3\":6,\"4\":3,\"5\":10,\"6\":7,\"7\":5,\"8\":21,\"10\":13,\"12\":22,\"14\":44,\"17\":29,\"20\":45,\"24\":34,\"29\":8,\"34\":7,\"40\":8,\"48\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1944,\"range\":[1,10000],\"values\":{\"0\":16,\"1\":3,\"2\":1,\"3\":3,\"4\":1,\"5\":3,\"6\":1,\"7\":1,\"8\":10,\"10\":6,\"12\""
		":10,\"14\":17,\"17\":12,\"20\":15,\"24\":12,\"29\":4,\"34\":4,\"40\":4,\"68\":1,\"81\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":24,\"range\":[1,2],\"values\":{\"0\":24,\"1\":0}},\"WEBFONT_DOWNLOAD_TIME_AFTER_START\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":11839,\"range\":[1,60000],\"values\":{\"1929\":0,\"2391\":2,\"2964"
		"\":2,\"3674\":0}},\"JS_PAGELOAD_EXECUTION_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":50,\"range\":[1,60000],\"values\":{\"42\":0,\"46\":1,\"51\":0}},\"JS_PAGELOAD_DELAZIFICATION_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":0}},\"JS_PAGELOAD_BASELINE_COMPILE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":0}},\"JS_PAGELOAD_PROTECT_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":0}},\"JS_PAGELOAD_PARSE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":91,\"range\":[1,1000],\"values\":{\"0\":186,\"1\":60,\"2\":4,\"3\":2,\"7\":1,\"10\":1,\"11\":0}},\"TIME_TO_NON_BLANK_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":370,\"range\":[1,100000],\"values\":{\"27\""
		":0,\"30\":1,\"55\":1,\"260\":1,\"289\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":739,\"range\":[1,100000],\"values\":{\"83\":0,\"92\":1,\"211\":1,\"395\":1,\"438\":0}},\"INPUT_EVENT_QUEUED_CLICK_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":152,\"range\":[1,5000],\"values\":{\"2\":0,\"3\":1,\"4\":1,\"7\":1,\"8\":1,\"9\":1,\"10\":2,\"17\":1,\"18\":1,\"20\":2,\"25\":1,\"27\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":1638,\"range\":[1,50000],\"values\":{\"1\":0,\"2\":1,\"15\":1,\"23\":1,\"108\":1,\"1433\":1,\"1577\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2660,\"range\":[1,50000],\"values\":{\"5\":0,\"6\":1,\"37\":1,\"45\":1,\"255\":1,\"2104\":1,\"2316\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2683,\"range\":[1,50000],\"values\":{\"9\":0,\"10\":1,\"50\":2,\"255\":1,\"2104\":1,\"2316\""
		":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2799,\"range\":[1,50000],\"values\":{\"23\":0,\"25\":1,\"50\":1,\"144\":1,\"255\":1,\"2104\":1,\"2316\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":3884,\"range\":[1,50000],\"values\":{\"23\":0,\"25\":1,\"158\":1,\"192\":1,\"255\":1,\"3089\":1,\"3400\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":3884,\"range\":[1,50000],\""
		"values\":{\"23\":0,\"25\":1,\"158\":1,\"192\":1,\"255\":1,\"3089\":1,\"3400\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":3890,\"range\":[1,50000],\"values\":{\"25\":0,\"28\":1,\"158\":1,\"192\":1,\"255\":1,\"3089\":1,\"3400\":0}},\"TIME_TO_RESPONSE_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1484,\"range\":[1,50000],\"values\":{\"1302\":0,\"1433\":1,\"1577\":0}},\"PERF_REQUEST_ANIMATION_CALLBACK_NON_PAGELOAD_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":0,\"range\":[1,5000],\"values\":{\"0\":8,\"1\":0}},\"APZ_ZOOM_ACTIVITY\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":4,\"1\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":26,\"range\":[1,50],\"values\":{\"0\":12,\"2\":13,\"3\":0}},\"USE_COUNTER2_WINDOW_APPLICATIONCACHE_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_AlignItems_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderCollapse_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxSizing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_Clear_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Direction_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Display_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Float_DOCUMENT\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontWeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridAutoFlow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PointerEvents_DOCUMENT\":{\"bucket_count\":3,\""
		"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Position_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinecap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinejoin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\""
		"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextAlign_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Visibility_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WhiteSpace_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1"
		"\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordBreak_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ZIndex_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Appearance_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_FillRule_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Opacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StopOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_AnimationTimingFunction_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundImage_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundRepeat_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_BackgroundSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderSpacing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxShadow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_ClipPath_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Color_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Content_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_CounterIncrement_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Cursor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontFamily_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_FontSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LineHeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyleType_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_Quotes_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextOverflow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_VerticalAlign_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Clip_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Fill_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":19,\"range\":[1,2],\"values\":{\"0\":0,\"1\":19,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Stroke_DOCUMENT\":"
		"{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransformOrigin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridTemplateColumns_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridTemplateRows_DOCUMENT\":{\"bucket_count\""
		":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transform_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ColumnGap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaxWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\""
		"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextIndent_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":15,\"range\":[1,2],\"values\":{\"0\":0,\"1\":15,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinHeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\""
		":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":15,\"range\":[1,2],\"values\":{\"0\":0,\"1\":15,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingBottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_PaddingLeft_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingRight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingTop_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_OutlineOffset_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ScrollMarginTop_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Bottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_Left_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginBottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginLeft_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_MarginRight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginTop_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Right_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Top_DOCUMENT\":"
		"{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineColor_DOCUMENT\":{\"bucket_count\":3,\""
		"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StopColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Background_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundPosition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,"
		"\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\""
		":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTop_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Border_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_BorderRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Overflow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Zoom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Font_DOCUMENT\":"
		"{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Margin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Outline_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\""
		"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Padding_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridColumn_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextDecoration_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":"
		"{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Animation_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBackgroundSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},"
		"\"USE_COUNTER2_CSS_PROPERTY_WebkitTransform_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAppearance_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAppearance_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_MozBoxSizing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxSizing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridColumnGap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_WebkitTransition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimation_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFontSmoothing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"keyedHistograms"
		"\":{\"HTTPS_RR_OPEN_TO_FIRST_SENT\":{\"no_https_rr_sub\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2571,\"range\":[1,30000],\"values\":{\"1\":0,\"2\":3,\"3\":1,\"5\":1,\"7\":2,\"9\":3,\"11\":5,\"1023\":2,\"1248\":0}}},\"MEDIA_CODEC_USED\":{\"video/avc\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}}}},\"scalars\":{\"networking.http3_enabled\":true,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_scalar_actions\":0,\""
		"power.total_thread_wakeups\":9355,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.child_events\":0,\"power.total_cpu_time_ms\":1737,\"telemetry.discarded.accumulations\":0},\"keyedScalars\":{\"power.cpu_time_per_process_type_ms\":{\"web.foreground\":335,\"prealloc\":274,\"privilegedabout\":1128},\"media.video_hardware_decoding_support\":{\"video/avc\":false},\"power.wakeups_per_process_type\":{\"web.foreground\":2233,\"prealloc\":1402,\"privilegedabout\":5720},\""
		"telemetry.event_counts\":{\"normandy#expose#nimbus_experiment\":1}}},\"extension\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":1,\"2\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":12,\"range\":[1,10000],\"values\":{\"2\":0,\"3\":1,\"8\":1,\"10\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":343,\"range\":[1,200],\"values\":{\"43\":0,\"46\":7,\"50\":0}},"
		"\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":7,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":7,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":12,\"range\":[1,10000],\"values\":{\"2\":0,\"3\":1,\"8\":1,\"10\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"0\":1,\"2\":1"
		",\"3\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":466,\"range\":[1,150000],\"values\":{\"132\":0,\"167\":1,\"267\":1,\"338\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":1,\"range\":[1,100],"
		"\"values\":{\"0\":7,\"1\":1,\"2\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":168,\"range\":[1,100],\"values\":{\"71\":0,\"73\":1,\"94\":1,\"96\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14,\"range\":[1,120],\"values\":{\"3\":0,\"4\":1,\"10\":1,\"11\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":154,\"range\":[1,2000],\"values\":{\"19\":0,\"22\":1,\"25\":1,\"29\":1,\"33\":2,\"38\":0}},"
		"\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7,\"range\":[1,200],\"values\":{\"2\":0,\"3\":1,\"4\":1,\"5\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":206,\"range\":[1,50000],\"values\":{\"21\":0,\"23\":1,\"174\":1,\"192\":0}},\"GC_WAIT_FOR_IDLE_MS\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":0,\"range\":[1,120000],\"values\":{\"0\":1,\"1\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1241144,\"range\":"
		"[16,2147483646],\"values\":{\"0\":0,\"16\":170,\"23\":15,\"34\":141,\"41\":2,\"50\":40,\"61\":8,\"74\":6,\"90\":1,\"109\":11,\"132\":6,\"160\":2,\"194\":5,\"235\":12,\"284\":5,\"344\":106,\"416\":37,\"503\":7,\"609\":7,\"737\":34,\"892\":27,\"1080\":6,\"1307\":20,\"1582\":11,\"1915\":4,\"2318\":7,\"2805\":6,\"3395\":7,\"4109\":8,\"4973\":7,\"6019\":4,\"7284\":8,\"8815\":7,\"10668\":5,\"12911\":2,\"15625\":2,\"18910\":1,\"27698\":1,\"33521\":1,\"40569\":3,\"330972\":1,\"400557\":0}},\""
		"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":36623,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":191,\"3\":202,\"5\":10,\"8\":2,\"12\":172,\"19\":27,\"30\":47,\"47\":29,\"73\":11,\"113\":14,\"176\":15,\"274\":10,\"426\":11,\"662\":7,\"1029\":3,\"1599\":1,\"2485\":1,\"3862\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":9475,\"range\":[1,150000000],\"values\":{\"0\":276,\"1\":48,\"2\":26,\"3\":57,\"4\":27,\"5\":14,\"6\":20,\"7\":17,\"8\":86,"
		"\"10\":28,\"12\":14,\"14\":22,\"17\":18,\"20\":18,\"24\":17,\"29\":10,\"35\":12,\"42\":9,\"50\":6,\"60\":9,\"72\":7,\"87\":2,\"105\":2,\"126\":2,\"182\":1,\"263\":1,\"316\":1,\"380\":1,\"457\":1,\"953\":1,\"1146\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":60,\"range\":[1,50],\"values\":{\"1\":0,\"2\":30,\"3\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\""
		"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":10,\"1\":0}},\"JS_PAGELOAD_PARSE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,10000],\"values\":{\"0\":3,\"2\":1,\"3\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":12,\"1\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":89,\"range\":[1,50000],\"values\":"
		"{\"1\":0,\"2\":1,\"6\":1,\"21\":1,\"28\":2,\"31\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":395,\"range\":[1,50000],\"values\":{\"28\":0,\"31\":1,\"67\":1,\"74\":1,\"98\":1,\"108\":1,\"119\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":491,\"range\":[1,50000],\"values\":{\"28\":0,\"31\":1,\"74\":1,\"98\":1,\"131\":2,\"144\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\""
		":0,\"sum\":494,\"range\":[1,50000],\"values\":{\"31\":0,\"34\":1,\"74\":1,\"98\":1,\"131\":2,\"144\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":529,\"range\":[1,50000],\"values\":{\"31\":0,\"34\":1,\"74\":1,\"131\":3,\"144\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":529,\"range\":[1,50000],\"values\":{\"31\":0,\"34\":1,\"74\":1,\"131\":3,\"144\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":530,\"range\":[1,50000],\"values\":{\"31\":0,\"34\":1,\"74\":1,\"131\":3,\"144\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":20,\"1\":0}}},\"keyedHistograms\":{},\"scalars\":{\"networking.http3_enabled\":true,\"telemetry.discarded.keyed_scalar_actions\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.child_events\":0,\""
		"telemetry.discarded.accumulations\":0},\"keyedScalars\":{}},\"dynamic\":{\"scalars\":{},\"keyedScalars\":{}},\"gpu\":{\"histograms\":{\"COMPOSITE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":969,\"range\":[1,1000],\"values\":{\"0\":75,\"1\":160,\"2\":152,\"3\":20,\"4\":26,\"5\":22,\"6\":15,\"7\":2,\"8\":2,\"9\":2,\"10\":2,\"14\":1,\"16\":2,\"26\":1,\"29\":0}},\"GPU_PROCESS_INITIALIZATION_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":122,\"range\":[1,64000],\"values\":{\""
		"102\":0,\"113\":1,\"125\":0}},\"MOUSEUP_FOLLOWED_BY_CLICK_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":167,\"range\":[1,200000],\"values\":{\"5\":0,\"6\":1,\"13\":1,\"17\":1,\"22\":3,\"46\":1,\"58\":0}},\"CONTENT_FULL_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":166,\"range\":[1,1000],\"values\":{\"0\":107,\"1\":135,\"2\":3,\"3\":2,\"8\":1,\"11\":1,\"12\":0}},\"CONTENT_FRAME_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":34034,\"range\":[1,5000],"
		"\"values\":{\"9\":0,\"11\":2,\"13\":1,\"15\":3,\"21\":4,\"25\":1,\"29\":1,\"34\":2,\"40\":2,\"47\":2,\"55\":5,\"64\":6,\"75\":9,\"88\":15,\"103\":86,\"120\":19,\"140\":25,\"164\":6,\"192\":34,\"224\":23,\"262\":1,\"306\":1,\"417\":1,\"487\":0}},\"CONTENT_FRAME_TIME_VSYNC\":{\"bucket_count\":100,\"histogram_type\":1,\"sum\":33123,\"range\":[8,792],\"values\":{\"0\":0,\"8\":1,\"40\":1,\"48\":1,\"88\":1,\"96\":1,\"104\":14,\"112\":63,\"120\":18,\"128\":4,\"136\":5,\"144\":4,\"152\":21,\"160\":4,\""
		"168\":4,\"176\":5,\"184\":1,\"208\":16,\"216\":11,\"224\":4,\"232\":7,\"240\":6,\"248\":3,\"256\":7,\"264\":2,\"280\":1,\"312\":1,\"344\":1,\"448\":1,\"456\":0}}},\"keyedHistograms\":{},\"scalars\":{\"telemetry.discarded.keyed_scalar_actions\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0},\"keyedScalars\":{}},\"socket\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{\""
		"telemetry.discarded.keyed_scalar_actions\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.accumulations\":0},\"keyedScalars\":{}},\"utility\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{},\"keyedScalars\":{}}},\"histograms\":{\"A11Y_INSTANTIATED_FLAG\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"CHILD_PROCESS_LAUNCH_MS\":{\""
		"bucket_count\":100,\"histogram_type\":0,\"sum\":66,\"range\":[1,64000],\"values\":{\"1\":0,\"2\":1,\"5\":1,\"6\":1,\"7\":3,\"8\":4,\"9\":0}},\"CONTENT_PROCESS_LAUNCH_MAINTHREAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,64000],\"values\":{\"0\":2,\"1\":2,\"2\":0}},\"CONTENT_PROCESS_LAUNCH_TOTAL_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":37,\"range\":[1,64000],\"values\":{\"8\":0,\"9\":3,\"10\":1,\"11\":0}},\"CONTENT_PROCESS_SYNC_LAUNCH_MS\":{\"bucket_count"
		"\":100,\"histogram_type\":0,\"sum\":31,\"range\":[1,64000],\"values\":{\"7\":0,\"8\":2,\"15\":1,\"17\":0}},\"CONTENT_PROCESS_LAUNCH_IS_SYNC\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":4,\"1\":3,\"2\":0}},\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":18,\"range\":[1,10000],\"values\":{\"1\":0,\"2\":2,\"14\":1,\"17\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":63,\"range\":[1,10000],\"values\":{\"17\":0,"
		"\"20\":1,\"40\":1,\"48\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":227,\"range\":[1,200],\"values\":{\"9\":0,\"10\":1,\"14\":5,\"46\":3,\"50\":0}},\"GC_BUDGET_WAS_INCREASED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":9,\"1\":0}},\"GC_SLICE_WAS_LONG\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":9,\"1\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":56,\""
		"range\":[1,10000],\"values\":{\"12\":0,\"14\":1,\"40\":1,\"48\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":8,\"range\":[1,1000],\"values\":{\"0\":1,\"8\":1,\"9\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1461,\"range\":[1,150000],\"values\":{\"211\":0,\"267\":1,\"1091\":1,\"1379\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"6\":1,\"7\":0}},\""
		"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":16,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":188,\"range\":[1,100],\"values\":{\"90\":0,\"92\":1,\"96\":1,\"98\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":12,\"range\":[1,120],\"values\":"
		"{\"3\":0,\"4\":1,\"8\":1,\"9\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":135,\"range\":[1,2000],\"values\":{\"0\":2,\"19\":1,\"22\":1,\"25\":1,\"29\":1,\"33\":1,\"38\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":9,\"range\":[1,200],\"values\":{\"2\":0,\"3\":1,\"6\":1,\"7\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":67,\"range\":[1,50000],\"values\":{\"14\":0,\"15\":1,\"50\":1,\"55\":0}},\""
		"GC_WAIT_FOR_IDLE_COUNT\":{\"bucket_count\":25,\"histogram_type\":0,\"sum\":0,\"range\":[1,120],\"values\":{\"0\":14,\"1\":0}},\"DESERIALIZE_BYTES\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2744768,\"range\":[16,2147483646],\"values\":{\"0\":0,\"16\":445,\"23\":4,\"34\":6,\"41\":8,\"50\":12,\"61\":8,\"74\":11,\"90\":35,\"109\":16,\"132\":11,\"160\":9,\"194\":14,\"235\":16,\"284\":33,\"344\":82,\"416\":200,\"503\":78,\"609\":57,\"737\":76,\"892\":66,\"1080\":34,\"1307\":28,\"1582\":98,\""
		"1915\":46,\"2318\":31,\"2805\":9,\"3395\":10,\"4109\":14,\"4973\":11,\"6019\":12,\"7284\":10,\"8815\":54,\"10668\":39,\"12911\":4,\"15625\":2,\"18910\":2,\"27698\":5,\"33521\":1,\"49098\":1,\"105331\":1,\"154277\":1,\"186713\":0}},\"DESERIALIZE_ITEMS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":127789,\"range\":[1,2147483646],\"values\":{\"0\":0,\"1\":461,\"3\":48,\"5\":64,\"8\":17,\"12\":54,\"19\":372,\"30\":144,\"47\":197,\"73\":61,\"113\":20,\"176\":26,\"274\":20,\"426\":99,\"662\":7,\""
		"1029\":7,\"1599\":1,\"2485\":1,\"9328\":1,\"14498\":0}},\"DESERIALIZE_US\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":21267,\"range\":[1,150000000],\"values\":{\"0\":333,\"1\":156,\"2\":139,\"3\":153,\"4\":103,\"5\":78,\"6\":87,\"7\":72,\"8\":99,\"10\":57,\"12\":55,\"14\":36,\"17\":25,\"20\":21,\"24\":18,\"29\":20,\"35\":14,\"42\":13,\"50\":28,\"60\":34,\"72\":23,\"87\":18,\"105\":6,\"151\":5,\"182\":2,\"263\":1,\"457\":1,\"660\":2,\"1378\":1,\"1657\":0}},\"GPU_PROCESS_LAUNCH_TIME_MS_2\":"
		"{\"bucket_count\":100,\"histogram_type\":0,\"sum\":155,\"range\":[1,64000],\"values\":{\"138\":0,\"152\":1,\"168\":0}},\"MEMORY_TOTAL\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":462020,\"range\":[32768,16777216],\"values\":{\"207574\":0,\"221217\":2,\"235757\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":2,\"1\":0}},\"HTTP_KBREAD_PER_CONN2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7,\"range\":[1,100000],\"values\":"
		"{\"0\":8,\"1\":1,\"2\":1,\"4\":1,\"5\":0}},\"HTTP_TRANSACTION_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":101,\"range\":[1,2],\"values\":{\"0\":22,\"1\":101,\"2\":0}},\"HTTP_PAGELOAD_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"HTTP_SCHEME_UPGRADE_TYPE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":23,\"range\":[1,50],\"values\":{\"0\":0,\"1\":23,\"2\":0}},\"TLS_EARLY_DATA_NEGOTIATED\":{\"bucket_count\":4,\""
		"histogram_type\":1,\"sum\":0,\"range\":[1,3],\"values\":{\"0\":27,\"1\":0}},\"SSL_HANDSHAKE_VERSION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":138,\"range\":[1,16],\"values\":{\"2\":0,\"3\":10,\"4\":27,\"5\":0}},\"SSL_HANDSHAKE_PRIVACY\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":61,\"range\":[1,16],\"values\":{\"0\":10,\"1\":10,\"3\":17,\"4\":0}},\"SSL_HANDSHAKE_RESULT\":{\"bucket_count\":673,\"histogram_type\":1,\"sum\":0,\"range\":[1,672],\"values\":{\"0\":37,\"1\":0}},\""
		"SSL_HANDSHAKE_RESULT_FIRST_TRY\":{\"bucket_count\":673,\"histogram_type\":1,\"sum\":0,\"range\":[1,672],\"values\":{\"0\":37,\"1\":0}},\"SSL_HANDSHAKE_RESULT_CONSERVATIVE\":{\"bucket_count\":673,\"histogram_type\":1,\"sum\":0,\"range\":[1,672],\"values\":{\"0\":6,\"1\":0}},\"SSL_TIME_UNTIL_READY\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":4966,\"range\":[1,60000],\"values\":{\"24\":0,\"25\":2,\"26\":1,\"30\":1,\"35\":1,\"47\":2,\"49\":2,\"51\":2,\"53\":8,\"55\":4,\"58\":3,\"64\":1,\"76\""
		":2,\"80\":2,\"96\":1,\"608\":1,\"636\":4,\"665\":0}},\"SSL_TIME_UNTIL_READY_FIRST_TRY\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":4966,\"range\":[1,60000],\"values\":{\"24\":0,\"25\":2,\"26\":1,\"30\":1,\"35\":1,\"47\":2,\"49\":2,\"51\":2,\"53\":8,\"55\":4,\"58\":3,\"64\":1,\"76\":2,\"80\":2,\"96\":1,\"608\":1,\"636\":4,\"665\":0}},\"SSL_TIME_UNTIL_READY_CONSERVATIVE\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":304,\"range\":[1,60000],\"values\":{\"29\":0,\"30\":1,\"35\":1,\"47\""
		":1,\"49\":1,\"55\":1,\"80\":1,\"84\":0}},\"SSL_RESUMED_SESSION\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":24,\"1\":13,\"2\":0}},\"CERT_REVOCATION_MECHANISMS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":67,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":3,\"3\":20,\"4\":0}},\"SPDY_KBREAD_PER_CONN2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2626,\"range\":[1,100000],\"values\":{\"0\":6,\"1\":1,\"2\":2,\"3\":3,\"5\":2,\"6\":2,\"8\":1,\""
		"10\":1,\"13\":1,\"25\":1,\"39\":1,\"49\":1,\"61\":1,\"149\":1,\"292\":1,\"365\":1,\"1404\":1,\"1757\":0}},\"HTTP_CHANNEL_DISPOSITION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":1478,\"range\":[1,16],\"values\":{\"1\":0,\"2\":22,\"3\":1,\"8\":1,\"9\":47,\"10\":100,\"11\":0}},\"HTTP_CHANNEL_ONSTART_SUCCESS\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":178,\"range\":[1,2],\"values\":{\"0\":1,\"1\":178,\"2\":0}},\"DNS_LOOKUP_METHOD2\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":801,"
		"\"range\":[1,16],\"values\":{\"0\":0,\"1\":102,\"6\":106,\"7\":9,\"8\":0}},\"DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3621,\"range\":[1,60000],\"values\":{\"0\":5,\"1\":2,\"3\":3,\"4\":1,\"5\":1,\"14\":2,\"17\":2,\"21\":1,\"26\":4,\"32\":2,\"40\":4,\"50\":5,\"77\":4,\"95\":2,\"118\":3,\"146\":1,\"181\":5,\"278\":1,\"428\":1,\"531\":0}},\"DNS_NATIVE_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":5032,\"range\":[1,60000],\"values\":{\"0\":112,\"1\":3,\"2\""
		":2,\"3\":3,\"4\":1,\"5\":1,\"6\":1,\"9\":1,\"11\":1,\"14\":5,\"17\":5,\"21\":2,\"26\":3,\"32\":3,\"40\":7,\"50\":5,\"62\":1,\"77\":7,\"95\":2,\"118\":6,\"146\":3,\"181\":5,\"278\":1,\"531\":1,\"658\":0}},\"DNS_NATIVE_QUEUING\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":756,\"range\":[1,60000],\"values\":{\"0\":172,\"1\":1,\"3\":1,\"4\":1,\"5\":1,\"6\":1,\"40\":1,\"50\":1,\"62\":1,\"77\":2,\"118\":3,\"146\":0}},\"DNS_FAILED_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":10,"
		"\"range\":[1,60000],\"values\":{\"0\":2,\"5\":2,\"6\":0}},\"TAB_COUNT\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"LOADED_TAB_COUNT\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"STARTUP_CACHE_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1062,\"range\":[1,50],\"values\":{\"0\":1,\"2\":531,\"3\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51"
		",\"histogram_type\":5,\"sum\":1062,\"range\":[1,50],\"values\":{\"0\":24,\"2\":531,\"3\":0}},\"NETWORK_ID_ONLINE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"URLCLASSIFIER_LOOKUP_TIME_2\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":3,\"range\":[1,5000],\"values\":{\"0\":44,\"3\":1,\"4\":0}},\"URLCLASSIFIER_SHUTDOWN_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,60000],\"values\":{\"0\":1,\"1\":0}},\""
		"URLCLASSIFIER_CL_CHECK_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":2,\"range\":[1,500],\"values\":{\"0\":44,\"2\":1,\"4\":0}},\"URLCLASSIFIER_VLPS_FALLOCATE_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":14,\"1\":0}},\"FX_NUMBER_OF_UNIQUE_SITE_ORIGINS_PER_DOCUMENT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,100],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"FX_PAGE_LOAD_MS_2\":{\"bucket_count\":200,\"histogram_type\":1,"
		"\"sum\":3188,\"range\":[1,10000],\"values\":{\"3132\":0,\"3183\":1,\"3233\":0}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4428,\"range\":[1,10000],\"values\":{\"0\":17,\"1\":4,\"2\":8,\"3\":8,\"4\":6,\"5\":22,\"6\":24,\"7\":18,\"8\":21,\"10\":42,\"12\":36,\"14\":52,\"17\":32,\"20\":39,\"24\":26,\"68\":1,\"81\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1594,\"range\":[1,10000],\"values\":{\"0\":14,\"1\":2,\"2\":3,"
		"\"3\":4,\"4\":1,\"5\":5,\"6\":9,\"7\":7,\"8\":9,\"10\":16,\"12\":11,\"14\":18,\"17\":9,\"20\":15,\"24\":8,\"29\":1,\"68\":1,\"81\":0}},\"FX_SESSION_RESTORE_STARTUP_INIT_SESSION_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,30000],\"values\":{\"0\":1,\"1\":0}},\"FX_SESSION_RESTORE_STARTUP_ONLOAD_INITIAL_WINDOW_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":17,\"range\":[1,30000],\"values\":{\"7\":0,\"12\":1,\"21\":0}},\"MS_MESSAGE_REQUEST_TIME_MS\":{\"bucket_count\""
		":20,\"histogram_type\":0,\"sum\":21,\"range\":[1,2000],\"values\":{\"0\":2,\"1\":1,\"2\":1,\"3\":2,\"10\":1,\"15\":0}},\"SEARCH_SERVICE_INIT_MS\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":295,\"range\":[1,1000],\"values\":{\"119\":0,\"203\":1,\"345\":0}},\"TOUCH_ENABLED_DEVICE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\""
		"1\":0}},\"BROWSER_IS_USER_DEFAULT_ERROR\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_SET_DEFAULT_DIALOG_PROMPT_RAWCOUNT\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":0,\"range\":[1,250],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_SET_DEFAULT_ALWAYS_CHECK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"CERT_VALIDATION_SUCCESS_BY_CA\":{\"bucket_count\":257,\"histogram_type\""
		":1,\"sum\":3422,\"range\":[1,256],\"values\":{\"48\":0,\"49\":7,\"181\":16,\"183\":1,\"184\":0}},\"CERT_PINNING_MOZ_RESULTS_BY_HOST\":{\"bucket_count\":513,\"histogram_type\":1,\"sum\":423,\"range\":[1,512],\"values\":{\"8\":0,\"9\":1,\"13\":9,\"33\":9,\"34\":0}},\"CERT_PINNING_MOZ_TEST_RESULTS_BY_HOST\":{\"bucket_count\":513,\"histogram_type\":1,\"sum\":66,\"range\":[1,512],\"values\":{\"14\":0,\"15\":1,\"17\":3,\"18\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\""
		"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"COOKIE_BEHAVIOR\":{\"bucket_count\":16,\"histogram_type\":1,\"sum\":5,\"range\":[1,15],\"values\":{\"4\":0,\"5\":1,\"6\":0}},\"TRACKING_PROTECTION_ENABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"TRACKING_PROTECTION_PBM_DISABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"QUERY_STRIPPING_COUNT\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":11,\"1\":0}},\"GRAPHICS_SANITY_TEST\":{\"bucket_count\":21,\"histogram_type\":1,\"sum\":0,\"range\":[1,20],\"values\":{\"0\":1,\"1\":0}},\"TOP_LEVEL_CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":16,\"range\":[1,2],\"values\":{\"0\":16,\"1\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":370,\"range\":[1,100000],\"values\":{\"321\":0,\"356\":1,\"395\":0}},\""
		"INPUT_EVENT_QUEUED_CLICK_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":183,\"range\":[1,5000],\"values\":{\"2\":0,\"3\":1,\"4\":1,\"7\":2,\"8\":1,\"10\":2,\"16\":1,\"17\":1,\"18\":1,\"19\":2,\"20\":1,\"25\":1,\"27\":0}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":986,\"range\":[1,60000],\"values\":{\"38\":0,\"42\":1,\"181\":1,\"221\":1,\"244\":2,\"269\":0}},\"WEBEXT_EXTENSION_STARTUP_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2494,\""
		"range\":[1,50000],\"values\":{\"5\":0,\"6\":1,\"7\":1,\"8\":1,\"9\":1,\"14\":1,\"81\":1,\"98\":1,\"500\":1,\"550\":3,\"605\":0}},\"BFCACHE_COMBO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":11,\"range\":[1,50],\"values\":{\"10\":0,\"11\":1,\"12\":0}},\"COOKIE_RETRIEVAL_SAMESITE_PROBLEM\":{\"bucket_count\":33,\"histogram_type\":1,\"sum\":0,\"range\":[1,32],\"values\":{\"0\":29,\"1\":0}},\"HTTPS_RR_PRESENTED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0"
		"\":53,\"1\":0}},\"EH_NUM_OF_HINTS_PER_PAGE\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,30],\"values\":{\"0\":1,\"1\":0}},\"USE_COUNTER2_WINDOW_APPLICATIONCACHE_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignItems_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderCollapse_PAGE\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxSizing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Clear_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Direction_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range"
		"\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Display_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Float_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontWeight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_GridAutoFlow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PointerEvents_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Position_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinecap_PAGE\""
		":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinejoin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextAlign_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Visibility_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\""
		"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WhiteSpace_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordBreak_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ZIndex_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\""
		"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Appearance_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillRule_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Opacity_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StopOpacity_PAGE\""
		":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationTimingFunction_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundImage_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundRepeat_PAGE\":{\"bucket_count\":3,\""
		"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderSpacing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxShadow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2"
		"],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Color_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Content_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_CounterIncrement_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_Cursor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontFamily_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LineHeight_PAGE\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyleType_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Quotes_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,"
		"\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextOverflow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_VerticalAlign_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Clip_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\""
		":0}},\"USE_COUNTER2_CSS_PROPERTY_Fill_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Stroke_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransformOrigin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_GridTemplateColumns_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridTemplateRows_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transform_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_ColumnGap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaxWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextIndent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_PAGE\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinHeight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\""
		":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingBottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingLeft_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingRight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}"
		"},\"USE_COUNTER2_CSS_PROPERTY_PaddingTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineOffset_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ScrollMarginTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_Bottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Left_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginBottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginLeft_PAGE\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginRight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Right_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\""
		"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Top_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\""
		"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StopColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Background_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_BackgroundPosition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_BorderWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Border_PAGE\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Overflow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Zoom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\""
		"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Font_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Margin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_Outline_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Padding_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridColumn_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextDecoration_PAGE\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Animation_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBackgroundSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\""
		"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransform_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAppearance_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAppearance_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":"
		"{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozBoxSizing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxSizing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridColumnGap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_WebkitTransition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimation_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFontSmoothing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"keyedHistograms\":{\""
		"NETWORK_HTTP_REDIRECT_TO_SCHEME\":{\"https\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}}},\"SSL_TIME_UNTIL_HANDSHAKE_FINISHED_KEYED_BY_KA\":{\"P256\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":3648,\"range\":[1,60000],\"values\":{\"834\":0,\"872\":2,\"912\":2,\"954\":0}},\"x25519\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":2425,\"range\":[1,60000],\"values\":{\"24\":0,\"25\":2,\"26\":1,\"35\":1,\"43\":1,\"47\":2,\"49\":2,\"51"
		"\":2,\"53\":8,\"55\":4,\"58\":3,\"64\":1,\"76\":2,\"80\":2,\"96\":1,\"636\":1,\"665\":0}}},\"HTTP_CHANNEL_DISPOSITION_UPGRADE\":{\"disabledNoReason\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":247,\"range\":[1,50],\"values\":{\"0\":1,\"1\":47,\"2\":100,\"3\":0}},\"disabledWont\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":47,\"range\":[1,50],\"values\":{\"1\":0,\"2\":22,\"3\":1,\"4\":0}}},\"TRANSACTION_WAIT_TIME_HTTPS_RR\":{\"h1_no_https_rr\":{\"bucket_count\":100,\"histogram_type\":0"
		",\"sum\":2210,\"range\":[1,5000],\"values\":{\"0\":18,\"2\":1,\"3\":10,\"4\":2,\"5\":1,\"6\":2,\"7\":1,\"10\":1,\"15\":1,\"16\":2,\"18\":1,\"19\":1,\"20\":1,\"33\":1,\"44\":1,\"93\":3,\"115\":1,\"123\":3,\"132\":2,\"163\":1,\"202\":2,\"287\":1,\"308\":0}},\"h2_no_https_rr\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":690,\"range\":[1,5000],\"values\":{\"0\":65,\"20\":1,\"100\":1,\"163\":1,\"175\":1,\"202\":1,\"217\":0}}},\"HTTP3_CHANNEL_ONSTART_SUCCESS\":{\"no_http3\":{\"bucket_count\":3,\""
		"histogram_type\":2,\"sum\":123,\"range\":[1,2],\"values\":{\"0\":1,\"1\":123,\"2\":0}}},\"DNS_LOOKUP_DISPOSITION3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1114,\"range\":[1,50],\"values\":{\"5\":0,\"6\":181,\"7\":4,\"8\":0}}},\"URLCLASSIFIER_CL_KEYED_UPDATE_TIME\":{\"mozilla\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":116,\"range\":[20,120000],\"values\":{\"68\":0,\"93\":1,\"127\":0}}},\"URLCLASSIFIER_UPDATE_REMOTE_NETWORK_ERROR\":{\"mozilla\":{\""
		"bucket_count\":31,\"histogram_type\":1,\"sum\":0,\"range\":[1,30],\"values\":{\"0\":1,\"1\":0}},\"\":{\"bucket_count\":31,\"histogram_type\":1,\"sum\":0,\"range\":[1,30],\"values\":{\"0\":14,\"1\":0}}},\"URLCLASSIFIER_UPDATE_REMOTE_STATUS2\":{\"mozilla\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":1,\"range\":[1,16],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":14,\"range\":[1,16],\"values\":{\"0\":0,\"1\":14,\"2\":0}}},\""
		"URLCLASSIFIER_UPDATE_SERVER_RESPONSE_TIME\":{\"mozilla\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":1222,\"range\":[1,100000],\"values\":{\"771\":0,\"1156\":1,\"1734\":0}},\"\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":1141,\"range\":[1,100000],\"values\":{\"30\":0,\"45\":2,\"68\":10,\"102\":1,\"153\":1,\"229\":0}}},\"URLCLASSIFIER_UPDATE_TIMEOUT\":{\"mozilla\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":0,\"range\":[1,4],\"values\":{\"0\":1,\"1\":0}},\"\":{\"bucket_count\":5,"
		"\"histogram_type\":1,\"sum\":0,\"range\":[1,4],\"values\":{\"0\":14,\"1\":0}}},\"URLCLASSIFIER_UPDATE_ERROR\":{\"mozilla\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":0,\"range\":[1,16],\"values\":{\"0\":1,\"1\":0}}},\"EMAIL_TRACKER_EMBEDDED_PER_TAB\":{\"content_normal\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":1,\"1\":0}},\"base_normal\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":1,\"1\":0}},\""
		"all_normal\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":1,\"1\":0}}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS_BY_ADDONID\":{\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":255,\"range\":[1,60000],\"values\":{\"221\":0,\"244\":1,\"269\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":230,\"range\":[1,60000],\"values\":{\"200\":0,\"221\":1,\"244\":0}},\"pictureinpicture@mozilla.org\":{\""
		"bucket_count\":100,\"histogram_type\":0,\"sum\":257,\"range\":[1,60000],\"values\":{\"221\":0,\"244\":1,\"269\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":199,\"range\":[1,60000],\"values\":{\"164\":0,\"181\":1,\"200\":0}},\"addons-search-detection@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":45,\"range\":[1,60000],\"values\":{\"38\":0,\"42\":1,\"46\":0}}},\"WEBEXT_EXTENSION_STARTUP_MS_BY_ADDONID\":{\"default-theme@mozilla.org\":{\""
		"bucket_count\":100,\"histogram_type\":0,\"sum\":107,\"range\":[1,50000],\"values\":{\"89\":0,\"98\":1,\"108\":0}},\"google@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":14,\"range\":[1,50000],\"values\":{\"13\":0,\"14\":1,\"15\":0}},\"bing@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":7,\"range\":[1,50000],\"values\":{\"6\":0,\"7\":1,\"8\":0}},\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":587,\"range\":[1,"
		"50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":560,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":585,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"ddg@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":8,\"range\":[1,50000],\"values\":{\"7\":0,\"8\":1,\"9\":0}},\""
		"wikipedia@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":9,\"range\":[1,50000],\"values\":{\"8\":0,\"9\":1,\"10\":0}},\"addons-search-detection@mozilla.com\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":83,\"range\":[1,50000],\"values\":{\"74\":0,\"81\":1,\"89\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":527,\"range\":[1,50000],\"values\":{\"454\":0,\"500\":1,\"550\":0}},\"ebay@search.mozilla.org\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":6,\"range\":[1,50000],\"values\":{\"5\":0,\"6\":1,\"7\":0}}},\"QM_QUOTA_INFO_LOAD_TIME_V0\":{\"Normal\":{\"bucket_count\":60,\"histogram_type\":0,\"sum\":1,\"range\":[1,180000],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"QM_FIRST_INITIALIZATION_ATTEMPT\":{\"DefaultRepository\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"TemporaryRepository\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\""
		"values\":{\"0\":0,\"1\":1,\"2\":0}},\"TemporaryStorage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"Storage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"PersistentOrigin\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"HTTP_TRAFFIC_ANALYSIS_3\":{\"Connection\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":13"
		",\"range\":[1,50],\"values\":{\"0\":36,\"1\":1,\"2\":6,\"3\":0}},\"Transaction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":62,\"range\":[1,50],\"values\":{\"0\":78,\"1\":28,\"2\":17,\"3\":0}}},\"SQLITE_STORE_OPEN\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"Top Sites\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"favicons.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"ls-archive.sqlite\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":4,\"1\":0}},\"protections.sqlite\":{"
		"\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":19,\"1\":0}},\"webappsstore.sqlite\":{\""
		"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}}},\"SQLITE_STORE_QUERY\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":9,\"1\":0}},\"Top Sites\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":8,\"1\":0}},\""
		"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":14,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":77,\"1\":0}},\"favicons.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":14,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":64,\"1\":0}},\""
		"ls-archive.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":32,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":55,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":32,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values"
		"\":{\"0\":127,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":13,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":35,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":482,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":"
		"{\"0\":1955,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":18,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":69,\"1\":0}}}},\"info\":{\"reason\":\"shutdown\",\"revision\":\"https://hg.mozilla.org/releases/mozilla-release/rev/30244986d6ff55bc3396db436fe1dba555828106\",\"timezoneOffset\":330,\"previousBuildId\":null,\"sessionId\":\""
		"78dba2a5-8cc9-4802-b03d-dd12452d1161\",\"subsessionId\":\"f9aa71a4-6fa3-4197-96f7-3fe0bde87a46\",\"previousSessionId\":null,\"previousSubsessionId\":null,\"subsessionCounter\":1,\"profileSubsessionCounter\":1,\"sessionStartDate\":\"2023-02-13T17:00:00.0+05:30\",\"subsessionStartDate\":\"2023-02-13T17:00:00.0+05:30\",\"sessionLength\":23,\"subsessionLength\":22,\"addons\":\"formautofill%40mozilla.org:1.0.1,pictureinpicture%40mozilla.org:1.0.0,screenshots%40mozilla.org:39.0.1,webcompat%40mozilla.org"
		":109.0.0,default-theme%40mozilla.org:1.3,addons-search-detection%40mozilla.com:2.0.0,google%40search.mozilla.org:1.3,wikipedia%40search.mozilla.org:1.2,bing%40search.mozilla.org:1.4,ddg%40search.mozilla.org:1.3,ebay%40search.mozilla.org:1.4\"}},\"clientId\":\"e84f4b7b-8d91-483a-9aa4-2d9b47c1055c\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20230127170202\",\"version\":\"109.0.1\""
		",\"vendor\":\"Mozilla\",\"displayVersion\":\"109.0.1\",\"platformVersion\":\"109.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":8191,\"virtualMaxMB\":134217728,\"cpu\":{\"isWindowsSMode\":false,\"count\":4,\"cores\":4,\"vendor\":\"GenuineIntel\",\"name\":\"Intel(R) Xeon(R) Gold 6230 CPU @ 2.10GHz\",\""
		"family\":6,\"model\":85,\"stepping\":7,\"l2cacheKB\":1024,\"l3cacheKB\":28160,\"speedMHz\":2095,\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2022,\"hasSuperfetch\":true,\"hasPrefetch\":true,\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"en-US\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":19044,\"windowsUBR\":2130},\"hdd\":{\"binary\":{\"model\":"
		"\"VMware Virtual disk\",\"revision\":\"2.0\",\"type\":\"SSD\"},\"profile\":{\"model\":\"VMware Virtual disk\",\"revision\":\"2.0\",\"type\":\"SSD\"},\"system\":{\"model\":\"VMware Virtual disk\",\"revision\":\"2.0\",\"type\":\"SSD\"}},\"gfx\":{\"D2DEnabled\":false,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"adapters\":[{\"description\":\"VMware SVGA 3D\",\"vendorID\":\"0x15ad\",\"deviceID\":\"0x0405\",\"subsysID\":\"040515ad\",\"RAM\""
		":8,\"driver\":\"vm3dum64_loader vm3dum64_loader vm3dum64_loader vm3dum_loader vm3dum_loader vm3dum_loader\",\"driverVendor\":null,\"driverVersion\":\"9.17.1.2\",\"driverDate\":\"11-2-2021\",\"GPUActive\":true}],\"monitors\":[{\"screenWidth\":1706,\"screenHeight\":726,\"refreshRate\":64,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender_software\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"webrender\":{\"status\":\"blocklisted"
		":FEATURE_FAILURE_VM_VENDOR\"},\"wrCompositor\":{\"status\":\"unavailable:FEATURE_FAILURE_DCOMP_NOT_ANGLE\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"unused\"},\"d3d11\":{\"status\":\"blocklisted:FEATURE_FAILURE_VM_VENDOR\"},\"d2d\":{\"status\":\"unavailable:FEATURE_FAILURE_D2D_D3D11_COMP\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"hasWinPackageId\":false,\"sec\":{\"antivirus\":null,\"antispyware\":null,\"firewall\":null},\"isWow64\":false,\"isWowARM64\":false},\""
		"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":true,\"telemetryEnabled\":false,\"locale\":\"en-GB\",\"intl\":{\"requestedLocales\":[\"en-GB\"],\"availableLocales\":[\"en-GB\",\"en-US\"],\"appLocales\":[\"en-GB\",\"en-US\"],\"systemLocales\":[\"en-US\",\"en-IN\"],\"regionalPrefsLocales\":[\"en-IN\"],\"acceptLanguages\":[\"en-GB\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true,\"background\":true},\""
		"userPrefs\":{\"browser.fixup.alternate.enabled\":false,\"browser.search.widget.inNavBar\":false,\"browser.urlbar.autoFill\":true,\"browser.urlbar.autoFill.adaptiveHistory.enabled\":false,\"browser.urlbar.dnsResolveSingleWordsAfterSearch\":0,\"browser.urlbar.quicksuggest.dataCollection.enabled\":false,\"browser.urlbar.suggest.quicksuggest.nonsponsored\":false,\"browser.urlbar.suggest.quicksuggest.sponsored\":false,\"browser.urlbar.suggest.bestmatch\":true,\"network.trr.strict_native_fallback\""
		":false,\"widget.content.allow-gtk-dark-theme\":false,\"widget.content.gtk-high-contrast.enabled\":true,\"nimbus.qa.pref-1\":\"default\",\"nimbus.qa.pref-2\":\"default\"},\"sandbox\":{\"effectiveContentProcessLevel\":6,\"contentWin32kLockdownState\":15},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"dltoken\":\"9769fe12-f8ce-4c12-96ca-b0f40c3c8edb\",\""
		"experiment\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.google.com\",\"ua\":\"chrome\",\"variation\":\"%2528not%2Bset%2529\"},\"defaultSearchEngine\":\"google-b-d\",\"defaultSearchEngineData\":{\"loadPath\":\"[other]addEngineWithDetails:google@search.mozilla.org\",\"name\":\"Google\",\"origin\":\"default\",\"submissionURL\":\"https://www.google.com/search?client=firefox-b-d&q=\"}},\"profile\":{\"creationDate\":19401,\"firstUseDate\":19401},\"addons\":{\"activeAddons\":{\""
		"formautofill@mozilla.org\":{\"version\":\"1.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19384,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19384,\"isSystem\":true,\""
		"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384},\"screenshots@mozilla.org\":{\"version\":\"39.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19384,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\""
		":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384},\"webcompat@mozilla.org\":{\"version\":\"109.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":19384,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Urgent "
		"post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":19384}},\"theme\":{},\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":null,\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":null,\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\"first-run-easy-set-up-fx108-rollout\":{\"branch\":\""
		"rollout\",\"type\":\"nimbus-rollout\",\"enrollmentId\":\"15a86976-9cf9-4310-bb37-647f858b2b57\"},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"type\":\"nimbus-nimbus\",\"enrollmentId\":\"e12a193e-8156-4a40-a783-f50a6b866d06\"},\"task-continuity-sync-after-tab-change-rollout-40\":{\"branch\":\"sync-after-tab\",\"type\":\"nimbus-nimbus\",\"enrollmentId\":\"cc4696d1-d650-41dc-abaa-b17e8ceb58c3\"}}}}", 
		LAST);

	web_url("appam-idiyappam-pathiri-powder-1kg", 
		"URL=https://www.tastynibbles.in/products/appam-idiyappam-pathiri-powder-1kg?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("roasted-vermicelli-200g", 
		"URL=https://www.tastynibbles.in/products/roasted-vermicelli-200g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		LAST);

	web_url("rice-palada-200g", 
		"URL=https://www.tastynibbles.in/products/rice-palada-200g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ginger-garlic-paste-100g", 
		"URL=https://www.tastynibbles.in/products/ginger-garlic-paste-100g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	web_url("mlalabar-tamarind-200g", 
		"URL=https://www.tastynibbles.in/products/mlalabar-tamarind-200g?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	web_url("roasted-sesame-oil-250ml", 
		"URL=https://www.tastynibbles.in/products/roasted-sesame-oil-250ml?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	web_url("apple-cider-vinegar-filtered", 
		"URL=https://www.tastynibbles.in/products/apple-cider-vinegar-filtered?view=modal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_url("jaggery-powder-500g_2", 
		"URL=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_5", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708678919094&gcd=13l3l3l3l1&npa=0&dma=0&cid=1009072370.1708678872&ul=en-gb&sr=1280x720&pscdl=noapi&_s=2&sid=1708678873&sct=1&seg=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2Fcollections%2Fgrocery&dr=https%3A%2F%2Fwww.tastynibbles.in%2F&dt=Grocery%20%E2%80%93%20Tasty%20Nibbles&en=user_engagement&_et=41673&tfd=43145", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708678872.1.1.1708678961.60.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708678873.1.1.1708678961.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_14", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678961278},\"events\":[{\"schema_id\":\"web_pixels_manager_unload/1.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"is_completed\":\"true\",\"runtime_error_caught\":\"false\",\"user_can_be_tracked\":\"true\",\"session_id\":\"7a626bab-f224-4e28-9f95-4c98b69e873a\",\"run_time_duration\":506,\"start_time\":779"
		",\"page_duration\":42347},\"metadata\":{\"event_created_at_ms\":1708678961277}}]}", 
		LAST);

	web_add_cookie("_shopify_sa_t=2024-02-23T09%3A02%3A41.871Z; DOMAIN=www.tastynibbles.in");

	web_url("jaggery-powder-500g_3", 
		"URL=https://www.tastynibbles.in/wpm@3698dd31wbfa453bap448c3218md5149de6/web-pixel-shopify-custom-pixel@0575/sandbox/modern/collections/grocery/products/jaggery-powder-500g", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("produce_batch_15", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678961829},\"events\":[{\"schema_id\":\"trekkie_metrics/2.0\",\"payload\":{\"metric_name\":\"navigation-PerformanceNavigationTiming-navigate\",\"shop_id\":55925866671},\"metadata\":{\"event_created_at_ms\":1708678961829}}]}", 
		LAST);

	web_custom_request("produce_batch_16", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708678961870},\"events\":[{\"schema_id\":\"trekkie_storefront_page_view/1.2\",\"payload\":{\"name\":null,\"referrer\":\"https://www.tastynibbles.in/collections/grocery\",\"path\":\"/collections/grocery/products/jaggery-powder-500g\",\"search\":\"\",\"title\":\"Jaggery Powder 500g \\xE2\\x80\\x93 Tasty Nibbles\",\"url\":\"https://www.tastynibbles.in/products/jaggery-powder-500g\",\"properties\":{},\"eventId\":\"sh-d533de76-BC92-4820-F43E-FF591C223EA5"
		"\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"pageType\":\"product\",\"resourceType\":\"product\",\"resourceId\":7676412035247,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"currency\":\"INR\",\"appName\":\"storefront\",\"uniqToken\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visitToken\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\""
		"microSessionId\":\"d533dec9-0EDA-4CAA-72EE-7418F3DB924D\",\"microSessionCount\":1,\"isPersistentCookie\":true,\"eventType\":\"page\"},\"metadata\":{\"event_created_at_ms\":1708678961870}}]}", 
		LAST);

	web_custom_request("produce_batch_17", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678961872},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d533de76-BC92-4820-F43E-FF591C223EA5\",\"referrer\":\"https://www.tastynibbles.in/collections/grocery\",\"canonical_url\":\"https://www.tastynibbles.in/products/jaggery-powder-500g\",\"event_name\":\"page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708678961871,\""
		"event_source_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"page_id\":\"d533dec9-0EDA-4CAA-72EE-7418F3DB924D\",\"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/"
		"20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"deprecated_visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"session_id\":\"sh-d533df20-7D25-49C4-3E2D-0B7F5081A15D\",\"asset_version_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708678961872}}]}", 
		LAST);

	web_custom_request("produce_batch_18", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678961873},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d533de78-E7F3-4CB4-9666-4C79369F6D67\",\"products\":[\"{\\\"variant_id\\\":42966895001775,\\\"product_id\\\":7676412035247,\\\"product_gid\\\":\\\"gid://shopify/Product/7676412035247\\\",\\\"name\\\":\\\"Jaggery Powder 500g - Pack 1\\\",\\\"price\\\":90,\\\"sku\\\":\\\"CPDFG31813\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":\\\"Pack 1\\"
		"\",\\\"category\\\":\\\"\\\",\\\"quantity\\\":1}\"],\"total_value\":90,\"currency\":\"INR\",\"event_name\":\"product_page_rendered\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708678961873,\"event_source_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"page_id\":\"d533dec9-0EDA-4CAA-72EE-7418F3DB924D\",\"source\":\""
		"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"deprecated_visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"session_id\":\"sh-d533df20-7D25-49C4-3E2D-0B7F5081A15D\",\"asset_version_id\":\""
		"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708678961873}}]}", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708678872.1.1.1708678962.59.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_19", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678961874},\"events\":[{\"schema_id\":\"trekkie_storefront_viewed_product/1.1\",\"payload\":{\"event\":\"monorail://trekkie_storefront_viewed_product/1.1\",\"properties\":{},\"eventId\":\"d533df24-6167-4D59-7604-FD384296111C\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"currency\":\"INR\",\"variantId\":42966895001775,\"productId\":7676412035247,\"productGid\":\"gid://shopify/Product/"
		"7676412035247\",\"name\":\"Jaggery Powder 500g - Pack 1\",\"price\":\"90.00\",\"sku\":\"CPDFG31813\",\"brand\":\"Tasty Nibbles\",\"variant\":\"Pack 1\",\"category\":\"\",\"nonInteraction\":true,\"referer\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"appName\":\"storefront\",\"uniqToken\":\""
		"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visitToken\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"microSessionId\":\"d533dec9-0EDA-4CAA-72EE-7418F3DB924D\",\"microSessionCount\":3,\"isPersistentCookie\":true,\"eventType\":\"track\"},\"metadata\":{\"event_created_at_ms\":1708678961874}}]}", 
		LAST);

	web_url("cart_3", 
		"URL=https://www.tastynibbles.in/cart?t=1708678962298&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=98e070a4-482f-41c0-852e-af0792570ab2; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_20", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"metadata\":{\"event_sent_at_ms\":1708678961876},\"events\":[{\"schema_id\":\"trekkie_asset_context/1.1\",\"payload\":{\"build_id\":\"4cd2e3324844ec508679a5cd021150832227ceb5\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"app_name\":\"storefront\",\"shop_id\":55925866671,\"monorail_region\":\"shop_domain\",\"source\":\"trekkie-storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708678961829}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"pageView\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{}\",\"event_id\":\"sh-d533de76-BC92-4820-F43E-FF591C223EA5\"},\"metadata\":{\"event_created_at_ms\":1708678961871}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"pageView\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"page\\\\\":\\\\\"/collections/grocery/products/jaggery-powder-500g\\\\\",\\\\\"title\\\\\":\\\\\"Jaggery Powder 500g \\xE2\\x80\\x93 "
		"Tasty Nibbles\\\\\",\\\\\"location\\\\\":\\\\\"https://www.tastynibbles.in/products/jaggery-powder-500g\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708678961871}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"pageView\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\""
		"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/y2AaCM-DyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"page_path\\\\\":\\\\\"/collections/grocery/products/jaggery-powder-500g\\\\\",\\\\\"page_title\\\\\":\\\\\"Jaggery Powder 500g \\xE2\\x80\\x93 Tasty Nibbles\\\\\",\\\\\"page_location\\\\\":\\\\\"https://www.tastynibbles.in/products/jaggery-powder-500g\\\\\"}\"},\"metadata\":{\"event_created_at_ms\":1708678961871}},{\"schema_id\":\""
		"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"viewedProduct\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{\\\\\"content_ids\\\\\":[7676412035247],\\\\\"content_type\\\\\":\\\\\"product_group\\\\\",\\\\\"content_name\\\\\":\\\\\"Jaggery Powder 500g - "
		"Pack 1\\\\\",\\\\\"content_category\\\\\":\\\\\"\\\\\",\\\\\"currency\\\\\":\\\\\"INR\\\\\",\\\\\"value\\\\\":\\\\\"90.00\\\\\"}\",\"event_id\":\"sh-d533de78-E7F3-4CB4-9666-4C79369F6D67\"},\"metadata\":{\"event_created_at_ms\":1708678961873}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"viewedProduct\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\""
		"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\\\"item\\\\\":{\\\\\"id\\\\\":\\\\\"CPDFG31813\\\\\",\\\\\"name\\\\\":\\\\\"Jaggery Powder 500g - Pack 1\\\\\",\\\\\"category\\\\\":\\\\\"\\\\\",\\\\\"quantity\\\\\":1,\\\\\"price\\\\\":\\\\\"90.00\\\\\",\\\\\"brand\\\\\":\\\\\"Tasty Nibbles\\\\\",\\\\\"variant\\\\\":\\\\\"Pack 1\\\\\",\\\\\"currency\\\\\":\\\\\"INR\\\\\"},\\\\\"event\\\\\":{\\\\\""
		"eventCategory\\\\\":\\\\\"EnhancedEcommerce\\\\\",\\\\\"eventAction\\\\\":\\\\\"Viewed Product\\\\\",\\\\\"nonInteraction\\\\\":true}}\"},\"metadata\":{\"event_created_at_ms\":1708678961873}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"viewedProduct\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\""
		"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\"event_properties\":\"{\\\\\"send_to\\\\\":[\\\\\"G-WCN3C8KG6R\\\\\",\\\\\"AW-378882101/hk9rCNWDyPoCELWQ1bQB\\\\\",\\\\\"MC-Y41CDBPZ5C\\\\\"],\\\\\"ecomm_prodid\\\\\":[\\\\\"shopify_IN_7676412035247_42966895001775\\\\\"],\\\\\"ecomm_totalvalue\\\\\":null,\\\\\"ecomm_pagetype\\\\\":\\\\\"product\\\\\",\\\\\"items\\\\\":[{\\\\\"id\\\\\":\\\\\"shopify_IN_7676412035247_42966895001775\\\\\",\\\\\"name\\\\\":\\\\\"Jaggery Powder 500g - Pack 1\\\\\",\\\\\""
		"brand\\\\\":\\\\\"Tasty Nibbles\\\\\",\\\\\"category\\\\\":\\\\\"\\\\\",\\\\\"price\\\\\":\\\\\"90.00\\\\\",\\\\\"variant\\\\\":\\\\\"Pack 1\\\\\"}]}\"},\"metadata\":{\"event_created_at_ms\":1708678961873}}]}", 
		LAST);

	web_custom_request("track_5", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vY29sbGVjdGlvbnMvZ3JvY2VyeS9wcm9kdWN0cy9qYWdnZXJ5LXBvd2Rlci01MDBnIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUdTWTlveW9vZTZBZCIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZn"
		"lTZXNzaW9uVG9rZW4iOiI2MGUxYmQ0MC0zZTc0LTRkOGMtYjI3OC1lNWQwNTQwMGUwMDcifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6Y29uZmlnIiwidGltZXN0YW1wIjoxNzA4Njc4OTYyMzIxLCJwcm9wZXJ0aWVzIjp7ImRhdGEiOnsibWVyY2hhbnRfa2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJzaG91bGRVc2VTaG9wSWQiOmZhbHNlLCJnVGFnSWQiOiIiLCJndGFnTGFiZWwiOiIiLCJyYXpvcnBheU1hZ2ljQnRuQ29uZmlnIjp7fSwiY2hlY2tvdXRPcHRpb25zIjp7Im5hbWUiOiIifSwiY2FydENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5h"
		"dGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwicHJvZHVjdENvbmZpZyI6eyJzdGF0dXMiOiJ0ZXN0IiwiY3VzdG9tU2VsZWN0b3IiOiIiLCJlbmFibGVNYWdpY0J0biI6ZmFsc2UsImVuYWJsZU5hdGl2ZVNob3BpZnlDaGVja2JveCI6ZmFsc2UsImR1YWwiOmZhbHNlfSwiY3VzdG9tQ3NzIjoiIn19fV19\"}", 
		LAST);

	web_url("42966895001775", 
		"URL=https://www.tastynibbles.in//variants/42966895001775/?section_id=store-availability", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	web_url("canonical.html_15", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=99f652b2-21dc-48ed-83cb-9c0a809fd366; DOMAIN=www.tastynibbles.in");

	web_add_cookie("_ga_Y41CDBPZ5C=GS1.1.1708678873.1.1.1708678962.0.0.0; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_21", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678962414},\"events\":[{\"schema_id\":\"web_pixels_manager_load/3.1\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"status\":\"loaded\",\"surface\":\"storefront-renderer\"},\"metadata\":{\"event_created_at_ms\":1708678961786}},{\"schema_id\":\"web_pixels_manager_init/3.2\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\","
		"\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"status\":\"initialized\",\"user_can_be_tracked\":\"true\"},\"metadata\":{\"event_created_at_ms\":1708678961787}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\""
		":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d533de76-BC92-4820-F43E-FF591C223EA5\"},\"metadata\":{\"event_created_at_ms\":1708678961788}},{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\"sh-d533de78-E7F3-4CB4-9666-4C79369F6D67\"},\"metadata\":{\"event_created_at_ms\":1708678961788}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/"
		"jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d533de76-BC92-4820-F43E-FF591C223EA5\"},\"metadata\":{\""
		"event_created_at_ms\":1708678961954}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\","
		"\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d533de78-E7F3-4CB4-9666-4C79369F6D67\"},\"metadata\":{\"event_created_at_ms\":1708678961954}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\""
		"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":166,\"start_time\":1020,\"session_id\":\""
		"33dd553e-6408-481a-ad9a-e7103413c657\"},\"metadata\":{\"event_created_at_ms\":1708678961954}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\""
		"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d533de76-BC92-4820-F43E-FF591C223EA5\"},\"metadata\":{\"event_created_at_ms\":1708678962055}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/"
		"jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d533de78-E7F3-4CB4-9666-4C79369F6D67\"},\"metadata\":{\"event_created_at_ms\":1708678962055}},{\""
		"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"status\":\""
		"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":269,\"start_time\":1020,\"session_id\":\"33dd553e-6408-481a-ad9a-e7103413c657\"},\"metadata\":{\"event_created_at_ms\":1708678962057}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\""
		"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"page_viewed\",\"event_type\":\"standard\",\"event_id\":\"sh-d533de76-BC92-4820-F43E-FF591C223EA5\"},\"metadata\":{\"event_created_at_ms\":1708678962190}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\""
		"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_viewed\",\"event_type\":\"standard\",\"event_id\":\""
		"sh-d533de78-E7F3-4CB4-9666-4C79369F6D67\"},\"metadata\":{\"event_created_at_ms\":1708678962190}},{\"schema_id\":\"web_pixels_manager_pixel_register/3.6\",\"payload\":{\"version\":\"0.0.444\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\""
		"pixel_script_version\":\"0575\",\"pixel_event_schema_version\":\"v1\",\"status\":\"registered\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"bundle_target\":\"modern\",\"error_msg\":\"N/A\",\"duration\":425,\"start_time\":1021,\"session_id\":\"33dd553e-6408-481a-ad9a-e7103413c657\"},\"metadata\":{\"event_created_at_ms\":1708678962214}}]}", 
		LAST);

	web_custom_request("track_6", 
		"URL=https://lumberjack.razorpay.com/v1/track", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"key\":\"ZmY5N2M0YzVkN2JiYzkyMWM1ZmVmYWJk\",\"data\":\""
		"eyJhZGRvbnMiOltdLCJjb250ZXh0Ijp7ImVudiI6InByb2R1Y3Rpb24iLCJob3N0bmFtZSI6Ind3dy50YXN0eW5pYmJsZXMuaW4iLCJ1cmwiOiJodHRwczovL3d3dy50YXN0eW5pYmJsZXMuaW4vY29sbGVjdGlvbnMvZ3JvY2VyeS9wcm9kdWN0cy9qYWdnZXJ5LXBvd2Rlci01MDBnIiwibGliIjoibWFnaWMtcGx1Z2lucyIsImJ1aWxkIjo4MDA1Njc4NDAwLCJzaGEiOiJmNjkzYzAzMzNmMTU0ZTljZWU4N2UwZDIxNGE4OTRkNGIxMDEwM2RkIiwia2V5IjoicnpwX2xpdmVfVWlUVUNBQ25UbHNqZEIiLCJtYWdpY19wbHVnaW5faWQiOiJOZUdTWTlveW9vZTZBZCIsImNoZWNrb3V0U3JjIjoicHJvZHVjdGlvbiIsImlzRGVwcmVjYXRlTW9kZSI6ZmFsc2UsInNob3BpZn"
		"lTZXNzaW9uVG9rZW4iOiI2MGUxYmQ0MC0zZTc0LTRkOGMtYjI3OC1lNWQwNTQwMGUwMDcifSwiZXZlbnRzIjpbeyJldmVudCI6Im1hZ2ljX3Nob3BpZnk6bWFnaWNfc2RrX2luamVjdGVkIiwidGltZXN0YW1wIjoxNzA4Njc4OTYzNDMxLCJwcm9wZXJ0aWVzIjp7InJlYXNvbiI6ImRvbSJ9fV19\"}", 
		LAST);

	web_submit_data("configs_4", 
		"Action=https://www.tastynibbles.in/apps/discos/configs?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=customer_info", "Value=null", ENDITEM, 
		"Name=customer_location", "Value=null", ENDITEM, 
		"Name=promotion_url", "Value=", ENDITEM, 
		LAST);

	web_url("public_3", 
		"URL=https://api.razorpay.com/v1/checkout/public?traffic_env=baseline&build=c5263b5e5d10b84ea8625c0bd8234ed5ee57d39d&modern=1&unified_lite=1&magic_script=1&merchant_key=rzp_live_UiTUCACnTlsjdB&magic_shopify_key=rzp_live_UiTUCACnTlsjdB&mode=live", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		LAST);

	web_url("c1a778d0cb1e42f1_2", 
		"URL=https://app.engati.com/webchat_parameters/whatsapp-config/c1a778d0cb1e42f1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("produce_3", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/v1/produce", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"schema_id\":\"boomerang_real_user_measurement_audit/7.1\",\"payload\":{\"boomerang_init\":1708678962214,\"server_timing\":\"{\\\"processing\\\":[326,\\\"gc:58\\\"],\\\"db\\\":[91,\\\"\\\"],\\\"parse\\\":[6,\\\"\\\"],\\\"render\\\":[86,\\\"\\\"],\\\"asn\\\":[0,\\\"10029\\\"],\\\"edge\\\":[0,\\\"BOM\\\"],\\\"country\\\":[0,\\\"IN\\\"],\\\"theme\\\":[0,\\\"130040463535\\\"],\\\"pageType\\\":[0,\\\"product\\\"],\\\"servedBy\\\":[0,\\\"722s\\\"],\\\"requestID\\\":[0,\\\""
		"d496ba2d-859f-4632-8e75-755508b48189\\\"],\\\"cfRequestDuration\\\":[407.000065,\\\"\\\"]}\",\"session_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"theme_id\":\"130040463535\",\"shop_id\":\"55925866671\",\"application\":\"storefront-renderer\",\"theme_name\":\"Expanse\",\"theme_version\":\"2.1.1\",\"render_region\":\"gcp-asia-southeast1\",\"largest_contentful_paint\":1668,\"visually_ready\":1661,\"first_contentful_paint\":873,\"navigation_start\":1708678960767,\"fetch_start\":1708678960772,"
		"\"domain_lookup_start\":1708678960772,\"domain_lookup_end\":1708678960772,\"connect_start\":1708678960772,\"connect_end\":1708678960772,\"request_start\":1708678960805,\"response_start\":1708678961265,\"response_end\":1708678961298,\"dom_loading\":1708678961303,\"dom_interactive\":1708678962266,\"dom_content_loaded_event_start\":1708678962327,\"dom_content_loaded_event_end\":1708678962330,\"dom_complete\":1708678964352,\"load_event_start\":1708678964352,\"load_event_end\":1708678964359,\""
		"secure_connection_start\":1708678960772,\"encoded_body_size\":119979,\"decoded_body_size\":679005,\"transfer_size\":122792,\"next_hop_protocol\":\"http/1.1\",\"redirect_count\":0,\"navigation_type\":\"navigate\",\"resource_timing\":\"{\\\"https://\\\":{\\\"c\\\":{\\\"dn.\\\":{\\\"shopify.com/\\\":{\\\"extensions/19823ad9-d3b6-4c87-9f3d-0100d3a41a25/bogo-477/assets/wbogo.min.js\\\":\\\"3f9,95,94*118jg,_,3kvv*22\\\",\\\"s/files/1/0194/1736/6592/t/1/assets/ba_\\\":{\\\"tracking.js?v=1637601969\\\""
		":\\\"3fc,aw,aw*13ya,_,6le*21\\\",\\\"loy_init.js?v=1647099145\\\":\\\"3r9,4b,4b*19rw,_,iej*23\\\"}},\\\"judge.me/widget_v3/base.css\\\":\\\"217c*44\\\"},\\\"onnect.facebook.net/en_US/fbevents.js\\\":\\\"3tw*21\\\",\\\"heckout.razorpay.com/v1/magic-checkout.js\\\":\\\"321z,1z*25\\\"},\\\"a\\\":{\\\"maicdn.com/discountmanager/common.js\\\":\\\"3f9,9q*24\\\",\\\"jax.googleapis.com/ajax/libs/jquery/\\\":{\\\"1.12.0/jquery.min.js\\\":\\\"3op,1qp,1ql*1q9o,_,1cuu*21\\\",\\\"3.\\\":{\\\"3.1/"
		"jquery.min.js\\\":\\\"3zb,1g3,1fz*1ngf,_,17m8*21\\\",\\\"5.1/jquery.min.js\\\":\\\"3ze,5q,5q*1nxp,_,193r*24\\\"}}},\\\"www.\\\":{\\\"tastynibbles.in/c\\\":{\\\"dn/\\\":{\\\"s\\\":{\\\"hop\\\":{\\\"/\\\":{\\\"t/12/assets/\\\":{\\\"theme.min.js?v=142180294906365401511651758011\\\":\\\"2f6,4o,4n*1p0z,_,22j3*22*42\\\",\\\"vendor-scripts-v1.js\\\":\\\"3f8,80,80*1woh,_,1vil*22\\\",\\\"sca_affiliate.js?v=2076242293115890491652863580\\\":\\\"3f9,8l,8k*17mf,_,m90*20\\\"},\\\"files/\\\":{\\\""
		"Frontside_e7f15f4c-e926-4631-a1b9-bd770635efe9_\\\":{\\\"120x.jpg?v=1702728997\\\":\\\"*024,24,87,16|119q,8c,8c,4u*12fo,149\\\",\\\"540x.jpg?v=1702728997\\\":\\\"*0dg,dg,86,3s,dg,dg|119q,61,5z,44*1mys,14t\\\"},\\\"Ba\\\":{\\\"ckside_\\\":{\\\"Ingredients_\\\":{\\\"120x.jpg?v=1702728997\\\":\\\"*024,24,au,16|11h8,5d,5d,3u*11yu,14r\\\",\\\"540x.jpg?v=1702728997\\\":\\\"*0dg,dg,86,h8,dg,dg|11h5,3w,3s,2d*1kyq,14s\\\"},\\\"Nf_\\\":{\\\"120x.jpg?v=1702728997\\\":\\\"*024,24,dh,16|11h8,9s,9s,52*11v4,"
		"146\\\",\\\"540x.jpg?v=1702728997\\\":\\\"*0dg,dg,86,un,dg,dg|11h6,kk,ki,31*1fi0,14d\\\"}},\\\"rcode_baca01f7-4654-404e-855e-d02ae9a18a1e_120x.jpg?v=1702728992\\\":\\\"*024,24,g4,16|11h8,8q,8q,5h*1zc,147\\\"},\\\"Ingredients_24f137d6-be28-41d1-9bd2-f57df0196de0_120x.jpg?v=1702728989\\\":\\\"*024,24,ir,16|11h8,90,8v,7a*11au,14s\\\"}},\\\"ifycloud/shopify/assets/s\\\":{\\\"torefront/\\\":{\\\"load_feature-87876fa245af19cbd14aa886ed59c6aa8a27c45d24dcd7a81cf2d2323506233e.js\\\":\\\"3f8,6q,6p*12sn,_,"
		"6ke*22\\\",\\\"features-1c0b396bd4d054b94abae1eb6a1bd6ba47beb35525c57a217c77a862ff06d83f.js\\\":\\\"3f8,7a,7a*1a2h,_,j05*22\\\"},\\\"hop_events_listener-a7c63dba65ccddc484f77541dc8ca437e60e1e9e297fe1c3faebf6523a0ede9b.js\\\":\\\"3o1,5k,5k*1294,_,456*21\\\"}},\\\"/trekkie.storefront.4cd2e3324844ec508679a5cd021150832227ceb5.min.js\\\":\\\"3o1,51,51*1k49,_,1w1n*21\\\"},\\\"wpm/b3698dd31wbfa453bap448c3218md5149de6m.js\\\":\\\"3o0,3x,3x*1kyi,_,zxv*21\\\"},\\\"heckouts/internal/preloads.js?"
		"permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3f8,84,7r,5y*1su,ob,1yt*21\\\"},\\\"clarity.ms/tag/997scejv0n\\\":\\\"3fc*21\\\",\\\"google\\\":{\\\"tagmanager.com/gt\\\":{\\\"ag/\\\":{\\\"js?id=G-WCN3C8KG6R\\\":\\\"3ty,63*25\\\",\\\"destination?id=\\\":{\\\"AW-378882101&l=dataLayer&cx=c\\\":\\\"312f,4n*21\\\",\\\"MC-Y41CDBPZ5C&l=dataLayer&cx=c\\\":\\\"312g,5b*21\\\"}},\\\"m.js?id=GTM-5N29RKV\\\":\\\"3um,65*21\\\"},\\\".com/pagead/1p-conversion/378882101/?...\\\":\\\"3193,19e,19e,"
		"16f,16a,16a,16a,16a,168*118f,gr,vm*21|3193,1f4,1f4,1d1,19h,19h,19h,19h,19h,19g*11r,iq,-k*21\\\"}},\\\"shop.app/checkouts/internal/preloads.js?permanent-domain=tastynibbles.myshopify.com&locale=en-IN\\\":\\\"3f8,db,db,bw,bu,7i,7i,7i,65*1,lt*21\\\",\\\"magic-plugins.razorpay.com/shopify/magic-shopify.js\\\":\\\"3f9,f0*26\\\",\\\"googleads.g.doubleclick.net/pagead/viewthroughconversion/378882101/?...\\\":\\\"1193|1193\\\"}}\",\"url\":\"https://www.tastynibbles.in/collections/grocery/products/"
		"jaggery-powder-500g\",\"referrer\":\"https://www.tastynibbles.in/collections/grocery\",\"boomerang_version\":\"2.3.2\"},\"metadata\":{\"event_created_at_ms\":1708678961932,\"event_sent_at_ms\":1708678964381}}", 
		LAST);

	web_url("canonical.html_16", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_6", 
		"URL=https://www.merchant-center-analytics.goog/mc/collect?v=2&tid=MC-Y41CDBPZ5C&gtm=45ve42l0v9122332314za200&_p=1708678961847&gcd=13l3l3l3l1&npa=0&dma=0&cid=1009072370.1708678872&ul=en-gb&sr=1280x720&pscdl=noapi&dt=Jaggery%20Powder%20500g%20%E2%80%93%20Tasty%20Nibbles&dl=https%3A%2F%2Fwww.tastynibbles.in%2Fproducts%2Fjaggery-powder-500g&sid=1708678873&sct=1&seg=1&dr=https%3A%2F%2Fwww.tastynibbles.in%2Fcollections%2Fgrocery&_s=1&tfd=6652", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=en=page_view&_ee=1&dp=%2Fcollections%2Fgrocery%2Fproducts%2Fjaggery-powder-500g\r\nen=view_item&_ee=1&pr1=idshopify_IN_7676412035247_42966895001775~nmJaggery%20Powder%20500g%20-%20Pack%201~brTasty%20Nibbles~ca~pr90.00~vaPack%201&ep.ecomm_prodid=shopify_IN_7676412035247_42966895001775&ep.ecomm_totalvalue=NaN&ep.ecomm_pagetype=product&_et=1&dl=https%3A%2F%2Fwww.tastynibbles.in%2Fcollections%2Fgrocery%2Fproducts%2Fjaggery-powder-500g", 
		LAST);

	/* add item */

	lr_think_time(12);

	web_url("products", 
		"URL=https://www.tastynibbles.in/recommendations/products?section_id=product-recommendations&limit=6&product_id=7676412035247", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_shopify_ga=undefined; DOMAIN=www.tastynibbles.in");

	web_custom_request("add.js", 
		"URL=https://www.tastynibbles.in/cart/add.js", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"Body=Size=Pack%201&form_type=product&utf8=%E2%9C%93&id=42966895001775&product-id=7676412035247&section-id=template--15564373229743__main", 
		LAST);

	web_custom_request("378882101", 
		"URL=https://google.com/pagead/form-data/378882101?gtm=45be42l0za220&gcd=13l3l3l3l1&dma=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=127833962.1708678873", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("378882101_2", 
		"URL=https://google.com/ccm/form-data/378882101?gtm=45be42l0za220&gcd=13l3l3l3l1&dma=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=127833962.1708678873&ec_mode=a&em=tv.1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_cookie("_ga_WCN3C8KG6R=GS1.1.1708678872.1.1.1708678985.36.0.0; DOMAIN=www.tastynibbles.in");

	web_add_cookie("cart_currency=INR; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_22", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678985802},\"events\":[{\"schema_id\":\"storefront_customer_tracking/4.12\",\"payload\":{\"event_id\":\"sh-d53499ee-09D4-4DE0-47E0-47F1170E97B6\",\"products\":[\"{\\\"variant_id\\\":42966895001775,\\\"product_id\\\":7676412035247,\\\"name\\\":\\\"Jaggery Powder 500g - Pack 1\\\",\\\"price\\\":90,\\\"sku\\\":\\\"CPDFG31813\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":\\\"Pack 1\\\",\\\"category\\\":\\\"\\\",\\\"quantity\\\":1}\"],\""
		"total_value\":90,\"currency\":\"INR\",\"cart_token\":\"Z2NwLWFzaWEtc291dGhlYXN0MTowMUhRQUs4RDhGMzQ0S1JONTVIU0g1TktKSg\",\"event_name\":\"product_added_to_cart\",\"shop_id\":55925866671,\"facebook_pixel_id\":\"511162776752735\",\"facebook_capi_enabled\":true,\"event_time\":1708678985802,\"event_source_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"page_id\":\"d533dec9-0EDA-4CAA-72EE-7418F3DB924D\",\""
		"source\":\"trekkie-storefront-renderer\",\"ccpa_enforced\":false,\"gdpr_enforced\":false,\"gdpr_enforced_as_string\":\"false\",\"navigation_type\":\"navigate\",\"navigation_api\":\"PerformanceNavigationTiming\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:123.0) Gecko/20100101 Firefox/123.0\",\"is_persistent_cookie\":true,\"deprecated_visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"session_id\":\"sh-d533df20-7D25-49C4-3E2D-0B7F5081A15D\",\"asset_version_id\":\""
		"4cd2e3324844ec508679a5cd021150832227ceb5\"},\"metadata\":{\"event_created_at_ms\":1708678985802}}]}", 
		LAST);

	web_custom_request("produce_batch_23", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678985803},\"events\":[{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"facebook\",\"event_name\":\"addedProduct\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"FacebookPixel\",\"pixel_id\":\"511162776752735\",\"event_properties\":\"{\\\"content_ids\\\":[7676412035247],\\\"content_type\\\":\\\""
		"product_group\\\",\\\"content_name\\\":\\\"Jaggery Powder 500g - Pack 1\\\",\\\"content_category\\\":\\\"\\\",\\\"currency\\\":\\\"INR\\\",\\\"value\\\":\\\"90.00\\\",\\\"num_items\\\":\\\"1\\\"}\",\"event_id\":\"sh-d53499ee-09D4-4DE0-47E0-47F1170E97B6\"},\"metadata\":{\"event_created_at_ms\":1708678985787}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_analytics\",\"event_name\":\"addedProduct\",\"unique_token\":\""
		"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"GoogleAnalytics\",\"pixel_id\":\"UA-194828003-1\",\"event_properties\":\"{\\\"item\\\":{\\\"id\\\":\\\"CPDFG31813\\\",\\\"name\\\":\\\"Jaggery Powder 500g - Pack 1\\\",\\\"category\\\":\\\"\\\",\\\"quantity\\\":\\\"1\\\",\\\"price\\\":90,\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"variant\\\":\\\"Pack 1\\\",\\\"currency\\\":\\\"INR\\\"},\\\"event\\\":{\\\"eventCategory\\\":\\\""
		"EnhancedEcommerce\\\",\\\"eventAction\\\":\\\"Added Product\\\",\\\"nonInteraction\\\":true}}\"},\"metadata\":{\"event_created_at_ms\":1708678985787}},{\"schema_id\":\"trekkie_storefront_ecommerce_event_emit/4.0\",\"payload\":{\"shop_id\":55925866671,\"partner_name\":\"google_gtag\",\"event_name\":\"addedProduct\",\"unique_token\":\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visit_token\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"integration_id\":\"GoogleGtag\",\"pixel_id\":\"G-WCN3C8KG6R\",\""
		"event_properties\":\"{\\\"send_to\\\":[\\\"G-WCN3C8KG6R\\\",\\\"AW-378882101/nYbCCNiDyPoCELWQ1bQB\\\"],\\\"ecomm_prodid\\\":[\\\"shopify_IN_7676412035247_42966895001775\\\"],\\\"ecomm_totalvalue\\\":90,\\\"ecomm_pagetype\\\":\\\"cart\\\",\\\"value\\\":90,\\\"currency\\\":\\\"INR\\\",\\\"items\\\":[{\\\"id\\\":\\\"shopify_IN_7676412035247_42966895001775\\\",\\\"name\\\":\\\"Jaggery Powder 500g - Pack 1\\\",\\\"brand\\\":\\\"Tasty Nibbles\\\",\\\"category\\\":\\\"\\\",\\\"price\\\":\\\"90\\\",\\\""
		"quantity\\\":\\\"1\\\",\\\"variant\\\":\\\"Pack 1\\\"}]}\"},\"metadata\":{\"event_created_at_ms\":1708678985802}}]}", 
		LAST);

	web_url("cart_4", 
		"URL=https://www.tastynibbles.in/cart?t=1708678985811&view=ajax", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("keep_alive=80e7a24d-2327-42e1-9b78-314596f9ba84; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_24", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678985804},\"events\":[{\"schema_id\":\"trekkie_storefront_track_added_product/1.1\",\"payload\":{\"event\":\"monorail://trekkie_storefront_track_added_product/1.1\",\"properties\":{},\"eventId\":\"d5349a18-A349-4CEA-C780-5135D753DCB5\",\"s2sMetadata\":{\"navigationApi\":\"PerformanceNavigationTiming\",\"navigationType\":\"navigate\"},\"referer\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"variantId\":\""
		"42966895001775\",\"productId\":7676412035247,\"currency\":\"INR\",\"quantity\":\"1\",\"price\":90,\"name\":\"Jaggery Powder 500g - Pack 1\",\"sku\":\"CPDFG31813\",\"brand\":\"Tasty Nibbles\",\"variant\":\"Pack 1\",\"category\":\"\",\"pageType\":\"product\",\"resourceType\":\"product\",\"resourceId\":7676412035247,\"shopId\":55925866671,\"isMerchantRequest\":null,\"themeId\":130040463535,\"themeCityHash\":\"10455128972921498656\",\"contentLanguage\":\"en\",\"appName\":\"storefront\",\"uniqToken\":"
		"\"e67cbbb6-46ca-4dd5-a520-ce36673bacc8\",\"visitToken\":\"60e1bd40-3e74-4d8c-b278-e5d05400e007\",\"microSessionId\":\"d533dec9-0EDA-4CAA-72EE-7418F3DB924D\",\"microSessionCount\":6,\"isPersistentCookie\":true,\"eventType\":\"track\"},\"metadata\":{\"event_created_at_ms\":1708678985804}}]}", 
		LAST);

	web_custom_request("378882101_3", 
		"URL=https://google.com/ccm/form-data/378882101?gtm=45be42l0za220&gcd=13l3l3l3l1&dma=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=127833962.1708678873&ec_mode=a&em=tv.1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("cart_5", 
		"URL=https://www.tastynibbles.in/cart?view=appikon.json&_=1708678963938", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("378882101_4", 
		"URL=https://google.com/pagead/form-data/378882101?gtm=45be42l0za220&gcd=13l3l3l3l1&dma=0&hn=www.googleadservices.com&npa=0&pscdl=noapi&auid=127833962.1708678873", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.tastynibbles.in/", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_cookie("keep_alive=2f8f03cb-48f2-4028-8a27-e179e579426e; DOMAIN=www.tastynibbles.in");

	web_custom_request("produce_batch_25", 
		"URL=https://www.tastynibbles.in/.well-known/shopify/monorail/unstable/produce_batch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"metadata\":{\"event_sent_at_ms\":1708678986286},\"events\":[{\"schema_id\":\"web_pixels_manager_event_publish/1.6\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"user_can_be_tracked\":\"true\",\"shop_prefs\":\"unknown\",\"event_id\":\""
		"sh-d53499ee-09D4-4DE0-47E0-47F1170E97B6\"},\"metadata\":{\"event_created_at_ms\":1708678985785}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"21037231\",\"pixel_app_id\":\"5043673\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\""
		"pixel_script_version\":\"39cbab14f2562be67855f852ca0e0f67\",\"pixel_configuration\":\"{\\\"accountID\\\":\\\"1171\\\"}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d53499ee-09D4-4DE0-47E0-47F1170E97B6\"},\"metadata\":{\"event_created_at_ms\":1708678985786}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://"
		"www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-app-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"APP\",\"pixel_runtime_context\":\"STRICT\",\"pixel_script_version\":\"0575\",\"pixel_configuration\":\"{}\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d53499ee-09D4-4DE0-47E0-47F1170E97B6\"},\""
		"metadata\":{\"event_created_at_ms\":1708678985786}},{\"schema_id\":\"web_pixels_manager_subscriber_event_emit/3.4\",\"payload\":{\"version\":\"0.0.444\",\"bundle_target\":\"modern\",\"page_url\":\"https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g\",\"shop_id\":55925866671,\"surface\":\"storefront-renderer\",\"pixel_id\":\"shopify-custom-pixel\",\"pixel_app_id\":\"shopify-pixel\",\"pixel_source\":\"CUSTOM\",\"pixel_runtime_context\":\"LAX\",\"pixel_script_version\":\""
		"0575\",\"pixel_event_schema_version\":\"v1\",\"event_name\":\"product_added_to_cart\",\"event_type\":\"standard\",\"event_id\":\"sh-d53499ee-09D4-4DE0-47E0-47F1170E97B6\"},\"metadata\":{\"event_created_at_ms\":1708678985786}}]}", 
		LAST);

	web_submit_data("campaigns", 
		"Action=https://www.tastynibbles.in/apps/discos/campaigns?shop=tastynibbles.myshopify.com", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.tastynibbles.in/collections/grocery/products/jaggery-powder-500g", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=feks_settings", "Value={\"shop_slug\":\"tastynibbles\",\"shop_id\":\"55925866671\",\"money_format\":\"₹ {{amount}}\",\"shop_cart_subtotal_text\":\"Saved amount: \",\"customer\":null,\"cart\":{\"note\":null,\"attributes\":{},\"original_total_price\":0,\"total_price\":0,\"total_discount\":0,\"total_weight\":0,\"item_count\":0,\"items\":[],\"requires_shipping\":false,\"currency\":\"INR\",\"items_subtotal_price\":0,\"cart_level_discount_applications\":[],\"checkout_charge_amount\":0},\""
		"shop_locale\":\"en\",\"product\":{\"id\":7676412035247,\"title\":\"Jaggery Powder 500g\",\"handle\":\"jaggery-powder-500g\",\"description\":\"<p>Sugarcane Powder</p>\\n<p>Gur / Gud / Shakkar Powder</p>\\n<p>Substitutes of White Sugar - Tea/Coffee, Cakes, Cookies, Cool Drinks </p>\\n<p>Natural Color &amp; Nutrients</p>\\n<p> </p>\",\"published_at\":\"2023-12-07T17:17:07+05:30\",\"created_at\":\"2023-12-07T17:14:01+05:30\",\"vendor\":\"Tasty Nibbles\",\"type\":\"\",\"tags\":[\"engjag237\",\""
		"engjag294\"],\"price\":9000,\"price_min\":9000,\"price_max\":52500,\"available\":true,\"price_varies\":true,\"compare_at_price\":9000,\"compare_at_price_min\":9000,\"compare_at_price_max\":54000,\"compare_at_price_varies\":true,\"variants\":[{\"id\":42966895001775,\"title\":\"Pack 1\",\"option1\":\"Pack 1\",\"option2\":null,\"option3\":null,\"sku\":\"CPDFG31813\",\"requires_shipping\":true,\"taxable\":false,\"featured_image\":{\"id\":37134111899823,\"product_id\":7676412035247,\"position\":1,\""
		"created_at\":\"2023-12-16T17:46:25+05:30\",\"updated_at\":\"2023-12-16T17:46:37+05:30\",\"alt\":null,\"width\":1500,\"height\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Frontside_e7f15f4c-e926-4631-a1b9-bd770635efe9.jpg?v=1702728997\",\"variant_ids\":[42966895001775]},\"available\":true,\"name\":\"Jaggery Powder 500g - Pack 1\",\"public_title\":\"Pack 1\",\"options\":[\"Pack 1\"],\"price\":9000,\"weight\":320,\"compare_at_price\":9000,\"inventory_management\":\"shopify\",\"barcode\":\"\""
		",\"featured_media\":{\"alt\":null,\"id\":29611306614959,\"position\":1,\"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Frontside_e7f15f4c-e926-4631-a1b9-bd770635efe9.jpg?v=1702728997\"}},\"requires_selling_plan\":false,\"selling_plan_allocations\":[]},{\"id\":42966895034543,\"title\":\"Pack 6\",\"option1\":\"Pack 6\",\"option2\":null,\"option3\":null,\"sku\":\"CPDFG32251\",\"requires_shipping\":true,\"taxable\":false,\""
		"featured_image\":{\"id\":37134112161967,\"product_id\":7676412035247,\"position\":8,\"created_at\":\"2023-12-16T17:46:31+05:30\",\"updated_at\":\"2023-12-16T17:46:33+05:30\",\"alt\":null,\"width\":1500,\"height\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Pack6_70778672-a38e-486b-8063-ec7d7c9ce40f.jpg?v=1702728993\",\"variant_ids\":[42966895034543]},\"available\":true,\"name\":\"Jaggery Powder 500g - Pack 6\",\"public_title\":\"Pack 6\",\"options\":[\"Pack 6\"],\"price\":52500,\"weight\""
		":3000,\"compare_at_price\":54000,\"inventory_management\":\"shopify\",\"barcode\":\"\",\"featured_media\":{\"alt\":null,\"id\":29611306975407,\"position\":8,\"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Pack6_70778672-a38e-486b-8063-ec7d7c9ce40f.jpg?v=1702728993\"}},\"requires_selling_plan\":false,\"selling_plan_allocations\":[]}],\"images\":[\"//www.tastynibbles.in/cdn/shop/files/"
		"Frontside_e7f15f4c-e926-4631-a1b9-bd770635efe9.jpg?v=1702728997\",\"//www.tastynibbles.in/cdn/shop/files/Backside_Ingredients.jpg?v=1702728997\",\"//www.tastynibbles.in/cdn/shop/files/Backside_Nf.jpg?v=1702728997\",\"//www.tastynibbles.in/cdn/shop/files/Barcode_baca01f7-4654-404e-855e-d02ae9a18a1e.jpg?v=1702728992\",\"//www.tastynibbles.in/cdn/shop/files/Ingredients_24f137d6-be28-41d1-9bd2-f57df0196de0.jpg?v=1702728989\",\"//www.tastynibbles.in/cdn/shop/files/"
		"Marketedby_a92f542a-8684-43e8-8f69-b19156bcc0ae.jpg?v=1702728986\",\"//www.tastynibbles.in/cdn/shop/files/Nutritioninformation_5b91ffbe-40cb-4ac9-85be-b842ee00cc5f.jpg?v=1702728988\",\"//www.tastynibbles.in/cdn/shop/files/Pack6_70778672-a38e-486b-8063-ec7d7c9ce40f.jpg?v=1702728993\"],\"featured_image\":\"//www.tastynibbles.in/cdn/shop/files/Frontside_e7f15f4c-e926-4631-a1b9-bd770635efe9.jpg?v=1702728997\",\"options\":[\"Size\"],\"media\":[{\"alt\":null,\"id\":29611306614959,\"position\":1,\""
		"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Frontside_e7f15f4c-e926-4631-a1b9-bd770635efe9.jpg?v=1702728997\"},\"aspect_ratio\":1,\"height\":1500,\"media_type\":\"image\",\"src\":\"//www.tastynibbles.in/cdn/shop/files/Frontside_e7f15f4c-e926-4631-a1b9-bd770635efe9.jpg?v=1702728997\",\"width\":1500},{\"alt\":null,\"id\":29611306516655,\"position\":2,\"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//"
		"www.tastynibbles.in/cdn/shop/files/Backside_Ingredients.jpg?v=1702728997\"},\"aspect_ratio\":1,\"height\":1500,\"media_type\":\"image\",\"src\":\"//www.tastynibbles.in/cdn/shop/files/Backside_Ingredients.jpg?v=1702728997\",\"width\":1500},{\"alt\":null,\"id\":29611306549423,\"position\":3,\"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Backside_Nf.jpg?v=1702728997\"},\"aspect_ratio\":1,\"height\":1500,\"media_type\":\"image\",\""
		"src\":\"//www.tastynibbles.in/cdn/shop/files/Backside_Nf.jpg?v=1702728997\",\"width\":1500},{\"alt\":null,\"id\":29611306582191,\"position\":4,\"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Barcode_baca01f7-4654-404e-855e-d02ae9a18a1e.jpg?v=1702728992\"},\"aspect_ratio\":1,\"height\":1500,\"media_type\":\"image\",\"src\":\"//www.tastynibbles.in/cdn/shop/files/Barcode_baca01f7-4654-404e-855e-d02ae9a18a1e.jpg?v=1702728992\",\""
		"width\":1500},{\"alt\":null,\"id\":29611306647727,\"position\":5,\"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Ingredients_24f137d6-be28-41d1-9bd2-f57df0196de0.jpg?v=1702728989\"},\"aspect_ratio\":1,\"height\":1500,\"media_type\":\"image\",\"src\":\"//www.tastynibbles.in/cdn/shop/files/Ingredients_24f137d6-be28-41d1-9bd2-f57df0196de0.jpg?v=1702728989\",\"width\":1500},{\"alt\":null,\"id\":29611306680495,\"position\":6,\""
		"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Marketedby_a92f542a-8684-43e8-8f69-b19156bcc0ae.jpg?v=1702728986\"},\"aspect_ratio\":1,\"height\":1500,\"media_type\":\"image\",\"src\":\"//www.tastynibbles.in/cdn/shop/files/Marketedby_a92f542a-8684-43e8-8f69-b19156bcc0ae.jpg?v=1702728986\",\"width\":1500},{\"alt\":null,\"id\":29611306713263,\"position\":7,\"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\""
		"//www.tastynibbles.in/cdn/shop/files/Nutritioninformation_5b91ffbe-40cb-4ac9-85be-b842ee00cc5f.jpg?v=1702728988\"},\"aspect_ratio\":1,\"height\":1500,\"media_type\":\"image\",\"src\":\"//www.tastynibbles.in/cdn/shop/files/Nutritioninformation_5b91ffbe-40cb-4ac9-85be-b842ee00cc5f.jpg?v=1702728988\",\"width\":1500},{\"alt\":null,\"id\":29611306975407,\"position\":8,\"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/"
		"Pack6_70778672-a38e-486b-8063-ec7d7c9ce40f.jpg?v=1702728993\"},\"aspect_ratio\":1,\"height\":1500,\"media_type\":\"image\",\"src\":\"//www.tastynibbles.in/cdn/shop/files/Pack6_70778672-a38e-486b-8063-ec7d7c9ce40f.jpg?v=1702728993\",\"width\":1500}],\"requires_selling_plan\":false,\"selling_plan_groups\":[],\"content\":\"<p>Sugarcane Powder</p>\\n<p>Gur / Gud / Shakkar Powder</p>\\n<p>Substitutes of White Sugar - Tea/Coffee, Cakes, Cookies, Cool Drinks </p>\\n<p>Natural Color &amp; Nutrients</p"
		">\\n<p> </p>\"},\"product_collections\":{\"7676412035247\":[310480994479,288549011631,309449097391,272056484015,270179795119,285126492335]},\"first_variant\":{\"id\":42966895001775,\"title\":\"Pack 1\",\"option1\":\"Pack 1\",\"option2\":null,\"option3\":null,\"sku\":\"CPDFG31813\",\"requires_shipping\":true,\"taxable\":false,\"featured_image\":{\"id\":37134111899823,\"product_id\":7676412035247,\"position\":1,\"created_at\":\"2023-12-16T17:46:25+05:30\",\"updated_at\":\"2023-12-16T17:46:37+05:30"
		"\",\"alt\":null,\"width\":1500,\"height\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Frontside_e7f15f4c-e926-4631-a1b9-bd770635efe9.jpg?v=1702728997\",\"variant_ids\":[42966895001775]},\"available\":true,\"name\":\"Jaggery Powder 500g - Pack 1\",\"public_title\":\"Pack 1\",\"options\":[\"Pack 1\"],\"price\":9000,\"weight\":320,\"compare_at_price\":9000,\"inventory_management\":\"shopify\",\"barcode\":\"\",\"featured_media\":{\"alt\":null,\"id\":29611306614959,\"position\":1,\""
		"preview_image\":{\"aspect_ratio\":1,\"height\":1500,\"width\":1500,\"src\":\"//www.tastynibbles.in/cdn/shop/files/Frontside_e7f15f4c-e926-4631-a1b9-bd770635efe9.jpg?v=1702728997\"}},\"requires_selling_plan\":false,\"selling_plan_allocations\":[]},\"cart_collections\":{},\"page_template\":\"product\"}", ENDITEM, 
		"Name=feks_products", "Value=[{\"product_id\":7676412035247,\"quantity\":1,\"title\":\"Jaggery Powder 500g - Pack 1\",\"handle\":\"jaggery-powder-500g\",\"line_price\":9000,\"price\":9000,\"variant_id\":42966895001775,\"product_has_only_default_variant\":false,\"collection_ids\":[310480994479,288549011631,309449097391,272056484015,270179795119,285126492335]}]", ENDITEM, 
		"Name=feks_page_template", "Value=product", ENDITEM, 
		"Name=feks_cart_total", "Value=9000", ENDITEM, 
		"Name=wizz_custom_cart_items", "Value=[{\"id\":42966895001775,\"quantity\":1,\"variant_id\":42966895001775,\"product_id\":7676412035247,\"discounted_price\":9000,\"wizz_offer_data\":\"null\",\"belong_to_collections\":[310480994479,288549011631,309449097391,272056484015,270179795119,285126492335]}]", ENDITEM, 
		"Name=currency_rate", "Value=1.0", ENDITEM, 
		"Name=browser_info", "Value={}", ENDITEM, 
		"Name=promotion_url", "Value=", ENDITEM, 
		LAST);

	return 0;
}