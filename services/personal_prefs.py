import streamlit as st
import requests
from . import config

def get_all():
    return st.session_state.prefs

def get(name):
    data = st.session_state.prefs

    try:
        return data[name]
    except:
        from . import default_prefs

        try:
            set(name, default_prefs.get(name))
        except:
            pass

def set(name, value):
    try:
        st.session_state.prefs[name] = value

        url_base = config.get("url_base")

        update_url = f"{url_base}/api/v1/usuario/preferences"

        headers = {
            'x-access-token' : str(st.session_state.cookie_manager.get('token')),
        }

        params = {
            'dados': str(st.session_state.prefs)
        }

        response = requests.put(update_url, headers=headers, params=params)
    except:
        pass
    return get(name)

#for key, value in get_all().items():
#    print(f'{key}: {value}')

